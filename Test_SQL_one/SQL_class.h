/* SQL_class.h

Test class for SQL Server

*/

#ifndef SQL_CLASS_H_INCLUDED
#define SQL_CLASS_H_INCLUDED

#include <string>			// for return std::string in ToString() member function
#include <iostream>

class SQLServer
{
	private:
		int m_instances;
		std::string m_dbname;

	public:
		SQLServer() : m_instances{ 1 }, m_dbname { "test_server_one" } {}
		SQLServer(int instances, std::string dbname)
			: m_instances { instances }, m_dbname {dbname} {}
		SQLServer(const SQLServer& other)
			: m_instances {other.m_instances}, m_dbname{ other.m_dbname } {}
		~SQLServer() {}

		int ServerCount() const { return m_instances; }
		std::string dbName() const { return m_dbname; }

		void SetInstances(const SQLServer& S, int instance) { m_instances = instance; }
		void SetdbName(const SQLServer& S, std::string dbname) { m_dbname = dbname; }

		void print_info() const
		{
			std::cout << "Database Name: " << m_dbname
				<< "\nNumber of instances: " << m_instances << std::endl;
		}
};

#endif // SQL_CLASS_H_INCLUDED

