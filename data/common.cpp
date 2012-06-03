#include "common.h"

void test()
{
    struct seat *test = (struct seat*)malloc(sizeof(struct seat));
    test->alias = new QString("test");
    qDebug(test->alias->utf8());
    delete test->alias;
}

bool createConnections(QString dbname)
{
    QSqlDatabase *db_handle = QSqlDatabase::addDatabase( "QSQLITE" );
    if ( ! db_handle ) {
	qWarning( "Failed to connect to driver" );
	return FALSE;
    }
    qDebug(dbname);
    db_handle->setDatabaseName( dbname);
    if ( ! db_handle->open() ) {
	qWarning( "Failed to open database: " +
		  db_handle->lastError().driverText() );
	qWarning( db_handle->lastError().databaseText() );
	return FALSE;
    }   
    return TRUE;
}
