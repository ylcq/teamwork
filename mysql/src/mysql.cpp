/*
 * mysql.cpp
 *
 *  Created on: 2015年9月28日
 *      Author: yanglian
 */
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;

int main()
{
cout << endl;


  sql::Driver *driver;
  sql::Connection *con;
  sql::Statement *stmt;
  sql::ResultSet *res;

  /* Create a connection */
  driver = get_driver_instance();
  con = driver->connect("localhost", "root", "2735");
  /* Connect to the MySQL test database */
  con->setSchema("example");

  stmt = con->createStatement();
  res = stmt->executeQuery("SELECT 'Hello World!' AS _message");
  stmt->execute("drop table if exists yang");
  stmt->execute("create table yang(id int)");
  stmt->execute("load data infile '/home/yanglian/input/example' into table yang");
  stmt->execute("select faculty(id) from vali");
//  while (res->next()) {
//    cout << "\t... MySQL replies: ";
//    /* Access column data by alias or column name */
//    cout << res->getString("_message") << endl;
//    cout << "\t... MySQL says it again: ";
//    /* Access column fata by numeric offset, 1 is the first column */
//    cout << res->getString(1) << endl;
//  }
  delete res;
  delete stmt;
  delete con;



return EXIT_SUCCESS;
}



