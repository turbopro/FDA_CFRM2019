/* SQL_main.cpp

main test file

*/

#include <iostream>
#include <string>
#include "SQL_class.h"

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	cout << "Create an SQL Server instance:";

	SQLServer server_1(1, "mySQL_Server_on1");
	
	cout << "\nNumber of instances: " << server_1.ServerCount() << endl;
	cout << "\nDatabase Name: " << server_1.dbName() << endl << endl;

	server_1.print_info();
	cout << endl << endl;

	return 0;
}


