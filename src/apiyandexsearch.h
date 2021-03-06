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

#ifndef APIYANDEXSEARCH_H
#define APIYANDEXSEARCH_H

#include <QObject>
#include "consts.h"

class QNetworkReply;

/**
 * @brief The ApiYandexSearch class is the interface for the Yandex Search APIs.
 *
 * Currently (2013-05-09) supported functions:
 *   - Search suggestions
 */
class ApiYandexSearch : public QObject
{
    Q_OBJECT
public:
    explicit ApiYandexSearch(QObject *parent = 0);

signals:
    void suggestionsReceived(const QString &request, const QList<Consts::Shared::Suggestion> &suggestions);
    void suggestionsError();

public slots:
    void getSuggestions(const QString &request);

private slots:
    void getSuggestionsFinished(QNetworkReply *reply);

private:
    QString m_currentSuggestionsRequest;
    
    struct _suggestionsParameters {
        const QString url = "http://suggest.yandex.ua/suggest-ya.cgi";
        const QString v = "4";
        const QString fact = "1";
    } m_suggestionsParameters;
};

#endif // APIYANDEXSEARCH_H
