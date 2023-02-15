#include "Employee.h"

Employee::Employee(string firstName, string lastName, int salary) {
	setFirstName(firstName);
	setLastName(lastName);
	setSalary(salary);
}

void Employee::setFirstName(string name) {
	firstName = name;
}

void Employee::setLastName(string name) {
	lastName = name;
}

void Employee::setSalary(int money) {
	if (money < 0) {
		money = 0;
	}
	salary = money;
}

string Employee::getFirstName() {
	return firstName;
}

string Employee::getLastName() {
	return lastName;
}

int Employee::getSalary() {
	return salary;
}