#include "header.h"

//default constructor
programmer::programmer() {
	cdeptNumber = 0;
	csupervisorName = "no supervisor";
	csalaryIncrease = 0;
	ccplusplus = false;
	cjava = false;
}
//initialized constructor
programmer::programmer(string name, int id, string phoneNumber, int age, string gender, string jobTitle, string salary, date hireDate, int dept, string sup, int sal, bool cpp, bool java) {
	cname = name;
	cid = id;
	cphoneNumber = phoneNumber;
	cage = age;
	cgender = gender;
	cjobTitle = jobTitle;
	csalary = salary;
	chireDate = hireDate;
	cdeptNumber = dept;
	csupervisorName = sup;
	csalaryIncrease = sal;
	ccplusplus = cpp;
	cjava = java;
}
//print function definition
void programmer::print() {
	cout << "Name: " << cname << endl;
	cout << "ID: " << cid << endl;
	cout << "Phone Number: " << cphoneNumber << endl;
	cout << "Age: " << cage << endl;
	cout << "Gender: " << cgender << endl;
	cout << "Job Title: " << cjobTitle << endl;
	cout << "Salary: " << csalary << endl;
	cout << "Hire Date: " << chireDate.get() << endl;
	cout << "Department Number: " << cdeptNumber << endl;
	cout << "Supervisor Name: " << csupervisorName << endl;
	cout << "Salary Increase Percent: " << csalaryIncrease << endl;
	cout << "C++ Knowledge: ";
	if (ccplusplus) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	cout << "Java Knowledge: ";
	if (cjava) {
		cout << "Yes" << endl << endl;
	}
	else {
		cout << "No" << endl << endl;
	}
}