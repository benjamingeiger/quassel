/***************************************************************************
 *   Copyright (C) 2005-2015 by the Quassel Project                        *
 *   devel@quassel-irc.org                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) version 3.                                           *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/

#ifndef COREINFODLG_H
#define COREINFODLG_H

#include "ui_coreinfodlg.h"
#include <QDialog>

#include "clientcoreinfo.h"

class CoreInfoDlg : public QDialog
{
    Q_OBJECT

public:
    CoreInfoDlg(QWidget *parent = 0);

public slots:
    void coreInfoAvailable();

protected:
    virtual void timerEvent(QTimerEvent *) { updateUptime(); }

private slots:
    void on_closeButton_clicked() { reject(); }
    void updateUptime();

private:
    Ui::CoreInfoDlg ui;
    ClientCoreInfo _coreInfo;
};


#endif //COREINFODLG_H
