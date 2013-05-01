/***************************************
 * Joly. Connect your web and your computer in the one place.
 * Copyright (C) 2012-2013 Ivan Akulov <gxoptg@gmail.com>
 *
 * This file is the part of Joly.
 *
 * Joly is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Joly is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Joly. If not, see <http://www.gnu.org/licenses/>.
 **************************************/

#include "apitwi.h"
#include <QDebug>
#include <QNetworkRequest>
#include <QNetworkReply>

#ifdef Q_OS_WIN
#include <QJson/include/QJson/Parser>
#elif defined(Q_OS_LINUX)
#include <qjson/parser.h>
#endif

#include <QtTweetLib/qtweetstatusupdate.h>

OAuthTwitter ApiTwi::m_oAuthTwitter;
QVariantMap ApiTwi::m_configuration;

ApiTwi::ApiTwi(QObject *parent)
    : QObject(parent), m_auth(&m_oAuthTwitter)
{
    connect(&m_auth, SIGNAL(authorisationSucceed()), SIGNAL(authorisationSucceed()));
    connect(&m_auth, SIGNAL(authorisationFailed()), SIGNAL(authorisationFailed()));
    connect(&m_auth, SIGNAL(authorisationCancelled()), SIGNAL(authorisationFailed()));

    connect(&m_auth, SIGNAL(authorisationSucceed()), SLOT(getConfigurationRequest()));
}

// It posts status update to twitter
void ApiTwi::post(QString message) {
    if (!isAuthorised()) {
        emit requestFailed();
        return;
    }

    QTweetStatusUpdate *statusUpdate = new QTweetStatusUpdate(&m_oAuthTwitter);
    connect(statusUpdate, SIGNAL(finished(QByteArray)), SLOT(handleRequestFinish(QByteArray)));
    connect(statusUpdate, SIGNAL(error(QTweetNetBase::ErrorCode,QString)), SIGNAL(requestFailed()));

    connect (statusUpdate, SIGNAL(finished(QByteArray)), statusUpdate, SLOT(deleteLater()));
    connect (statusUpdate, SIGNAL(error(QTweetNetBase::ErrorCode,QString)), statusUpdate, SLOT(deleteLater()));

    statusUpdate->post(message);
}

// It returns result of status update
int ApiTwi::postResult() const {
    QString str = QString(m_returnedData);
    if (str.contains("<error>"))
        return -1;
    else
        return 0;
}

QVariantMap ApiTwi::getConfiguration() const {
    return m_configuration;
}

void ApiTwi::getConfigurationRequest() {
    QUrl url("https://api.twitter.com/1.1/help/configuration.json");

    QNetworkRequest request(url);
    QByteArray header = m_oAuthTwitter.generateAuthorizationHeader(url, OAuth::GET);
    request.setRawHeader(AUTH_HEADER, header);

    /*QNetworkReply *reply = */m_oAuthTwitter.networkAccessManager()->get(request);
    connect(m_oAuthTwitter.networkAccessManager(), SIGNAL(finished(QNetworkReply*)), SLOT(saveConfiguration(QNetworkReply*)));
}

void ApiTwi::saveConfiguration(QNetworkReply *reply) {
    /* TODO: fix this.
     * QTweetStatusUpdate somewhy does not emit finished() signal
     * in the lib version used for Joly based on Qt 4.8.
     * Otherwise m_oAuthTwitter.networkAccessManager does.
     */
#if 1
    qDebug() << reply->url();
    if (reply->url().toString().endsWith("configuration.json")) {
#endif
    QJson::Parser parser;
    m_configuration = parser.parse(reply->readAll()).toMap();
    emit configurationIsReady(m_configuration);
#if 1
    }
    else {
        m_returnedData = reply->readAll();
        emit requestFinished();
    }
#endif
}