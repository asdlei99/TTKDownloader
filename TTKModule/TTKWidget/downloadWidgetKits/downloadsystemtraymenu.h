#ifndef DOWNLOADSYSTEMTRAYMENU_H
#define DOWNLOADSYSTEMTRAYMENU_H

/* =================================================
 * This file is part of the TTK Downloader project
 * Copyright (C) 2015 - 2019 Greedysky Studio

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
 ================================================= */

#include <QMenu>
#include "downloadglobaldefine.h"

/*! @brief The class of the system tray menu widget.
 * @author Greedysky <greedysky@163.com>
 */
class DOWNLOAD_WIDGET_EXPORT DownloadSystemTrayMenu : public QMenu
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit DownloadSystemTrayMenu(QWidget *parent = 0);

    ~DownloadSystemTrayMenu();

    /*!
     * Get class object name.
     */
    static QString getClassName();

protected:
    /*!
     * Override the widget event.
     */
    virtual void showEvent(QShowEvent *event) override;

    QMenu *m_floatMenu;

};

#endif // DOWNLOADSYSTEMTRAYMENU_H
