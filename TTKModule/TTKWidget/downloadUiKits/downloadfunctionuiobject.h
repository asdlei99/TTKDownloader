#ifndef DOWNLOADFUNCTIONUIOBJECT_H
#define DOWNLOADFUNCTIONUIOBJECT_H

/***************************************************************************
 * This file is part of the TTK Downloader project
 * Copyright (C) 2015 - 2023 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/

#include <QObject>

/*! @brief The namespace of the function button style.
 * @author Greedysky <greedysky@163.com>
 */
namespace TTK
{
    namespace UI
    {
        static const QString THDNewDownload = " \
            QToolButton{ border:none; \
            background-image: url(:/functions/btn_new_normal);} \
            QToolButton:hover{ background-image: url(:/functions/btn_new_hover);}";

        static const QString THDStartDownload = " \
            QToolButton{ border:none; \
            background-image: url(:/functions/btn_start_normal);} \
            QToolButton:hover{ background-image: url(:/functions/btn_start_hover);}";

        static const QString THDStopDownload = " \
            QToolButton{ border:none; \
            background-image: url(:/functions/btn_stop_normal);} \
            QToolButton:hover{ background-image: url(:/functions/btn_stop_hover);}";

        static const QString THDDeleteDownload = " \
            QToolButton{ border:none; \
            background-image: url(:/functions/btn_delete_normal);} \
            QToolButton:hover{ background-image: url(:/functions/btn_delete_hover);}";

        static const QString THDSettings = " \
            QToolButton{ border:none; \
            background-image: url(:/functions/btn_setting_normal);} \
            QToolButton:hover{ background-image: url(:/functions/btn_setting_hover);}";

    }
}

#endif // DOWNLOADFUNCTIONUIOBJECT_H
