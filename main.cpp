#include <qapplication.h>
#include "mainwnd.h"

int main( int argc, char ** argv )
{
    QApplication a( argc, argv );
    MainWnd w;
    w.show();
    if (  ! createConnections("database.sqlite"))
	return 1;
    a.connect( &a, SIGNAL( lastWindowClosed() ), &a, SLOT( quit() ) );
    return a.exec();
}
