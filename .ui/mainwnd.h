/****************************************************************************
** Form interface generated from reading ui file 'mainwnd.ui'
**
** Created: Sun Jun 3 00:25:50 2012
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MAINWND_H
#define MAINWND_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTabWidget;
class QWidget;
class QFrame;
class QPushButton;

class MainWnd : public QDialog
{
    Q_OBJECT

public:
    MainWnd( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~MainWnd();

    QTabWidget* MainTab;
    QWidget* tab_status;
    QFrame* frame3;
    QWidget* tab_enter;
    QWidget* tab_exit;
    QWidget* tab_log;
    QWidget* tab_maintanence;
    QPushButton* buttonHelp;
    QPushButton* buttoneExit;

protected:
    QVBoxLayout* MainWndLayout;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

};

#endif // MAINWND_H
