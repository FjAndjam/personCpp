// CppCoding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"

void displaySalary(Employee e) {
	cout << e.getFirstName() << " " << e.getLastName() << "'s salary is $" << e.getSalary() << "k" << endl;
}

int main()
{
	Employee Lee("Mike", "Lee", 300);
	Employee Liu("Luna", "Liu", 200);
	displaySalary(Lee);
	displaySalary(Liu);
	Lee.setSalary(Lee.getSalary() * 1.1);	
	Liu.setSalary(Lee.getSalary() * 1.1);
	cout << "=======" << endl;
	displaySalary(Lee);
	displaySalary(Liu);

	return 0;
}