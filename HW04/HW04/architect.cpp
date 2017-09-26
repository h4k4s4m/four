#include "header.h"

//default constructor
architect::architect() {
	cdeptNumber = 0;
	csupervisorName = "no supervisor";
	csalaryIncrease = 0;
	cyearsExp = 0;
}
//initialized constructor
architect::architect(string name, int id, string phoneNumber, int age, string gender, string jobTitle, string salary, date hireDate, int dept, string sup, int sal, int years) {
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
	cyearsExp = years;
}
//print function definition for architect class
void architect::print() {
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
	cout << "Years of Experience: " << cyearsExp << endl << endl;
}