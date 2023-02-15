#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
public:
	Employee(string, string, int);
	void setFirstName(string);
	void setLastName(string);
	void setSalary(int);
	string getFirstName();
	string getLastName();
	int getSalary();
private:
	string firstName;
	string lastName;
	int salary;
};

#endif // !EMPLOYEE_H
