/****************************************************************************
** Form implementation generated from reading ui file 'mainwnd.ui'
**
** Created: Sun Jun 3 00:25:51 2012
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "mainwnd.h"

#include <qvariant.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qframe.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a MainWnd as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
MainWnd::MainWnd( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "MainWnd" );
    setSizeGripEnabled( TRUE );
    MainWndLayout = new QVBoxLayout( this, 11, 6, "MainWndLayout"); 

    MainTab = new QTabWidget( this, "MainTab" );

    tab_status = new QWidget( MainTab, "tab_status" );

    frame3 = new QFrame( tab_status, "frame3" );
    frame3->setGeometry( QRect( 7, 4, 491, 271 ) );
    frame3->setFrameShape( QFrame::StyledPanel );
    frame3->setFrameShadow( QFrame::Raised );
    MainTab->insertTab( tab_status, QString::fromLatin1("") );

    tab_enter = new QWidget( MainTab, "tab_enter" );
    MainTab->insertTab( tab_enter, QString::fromLatin1("") );

    tab_exit = new QWidget( MainTab, "tab_exit" );
    MainTab->insertTab( tab_exit, QString::fromLatin1("") );

    tab_log = new QWidget( MainTab, "tab_log" );
    MainTab->insertTab( tab_log, QString::fromLatin1("") );

    tab_maintanence = new QWidget( MainTab, "tab_maintanence" );
    MainTab->insertTab( tab_maintanence, QString::fromLatin1("") );
    MainWndLayout->addWidget( MainTab );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setAutoDefault( TRUE );
    Layout1->addWidget( buttonHelp );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttoneExit = new QPushButton( this, "buttoneExit" );
    buttoneExit->setAutoDefault( TRUE );
    Layout1->addWidget( buttoneExit );
    MainWndLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(528, 368).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttoneExit, SIGNAL( clicked() ), this, SLOT( reject() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
MainWnd::~MainWnd()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void MainWnd::languageChange()
{
    setCaption( tr( "Access Control" ) );
    MainTab->changeTab( tab_status, tr( "Status" ) );
    MainTab->changeTab( tab_enter, tr( "Enter" ) );
    MainTab->changeTab( tab_exit, tr( "Exit" ) );
    MainTab->changeTab( tab_log, tr( "Access Log" ) );
    MainTab->changeTab( tab_maintanence, tr( "Maintenance" ) );
    buttonHelp->setText( tr( "&Help" ) );
    buttonHelp->setAccel( QKeySequence( tr( "F1" ) ) );
    buttoneExit->setText( tr( "&Exit" ) );
    buttoneExit->setAccel( QKeySequence( tr( "Alt+E" ) ) );
}

