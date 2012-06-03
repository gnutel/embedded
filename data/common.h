#include <iostream>
#include <cstdlib>
#include <qstring.h>

#include <qsqldatabase.h>
#include <qsqlcursor.h>
#include <qsqlquery.h>
#include <qdatatable.h>

using namespace std;

struct seat{
    int seat_id;
    int student_id;    
    bool occupy;
    QString *alias;
};

void test();
bool createConnections(QString);
