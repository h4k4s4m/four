#include "header.h"

//definition of print function
void employee::print() {
	
		cout << "Name: " << cname << endl;
		cout << "ID: " << cid << endl;
		cout << "Phone Number: " << cphoneNumber << endl;
		cout << "Age: " << cage << endl;
		cout << "Gender: " << cgender << endl;
		cout << "Job Title: " << cjobTitle << endl;
		cout << "Salary: " << csalary << endl;
		cout << "Hire Date: " << chireDate.get() << endl << endl;
	
}
//default constructor
employee::employee()
{
		cname = "no name";
		cid = 0;
		cphoneNumber = "no phone number";
		cage = 0;
		cgender = "no gender";
		cjobTitle = "no job title";
		csalary = "no salary";
		chireDate.set(0, 0, 0);
	
}
//initialized constructor
employee::employee(string name, int id, string phoneNumber, int age, string gender, string jobTitle, string salary, date hireDate) 
{
	cname = name;
	cid = id;
	cphoneNumber = phoneNumber;
	cage = age;
	cgender = gender;
	cjobTitle = jobTitle;
	csalary = salary;
	chireDate = hireDate;
}
//definition of overloading operator
bool employee::operator==(employee a)
{
	return this->cphoneNumber == a.cphoneNumber;
}
//definition of addAge function
void employee::addAge(int a)
{
	this->cage += a;
	cout << "There were " << a << " years added!" << endl;
}
//definition of overloading the plus operator
void employee::operator+(const int a)
{
	this->cage += a;
	cout << "There were " << a << " years added!" << endl;
}

ostream & operator<<(ostream & output, const employee & d)
{
	output << "Name: " << d.cname << endl;
	output << "ID: " << d.cid << endl;
	output << "Phone Number: " << d.cphoneNumber << endl;
	output << "Age: " << d.cage << endl;
	output << "Gender: " << d.cgender << endl;
	output << "Job Title: " << d.cjobTitle << endl;
	output << "Salary: " << d.csalary << endl;
	return output;
	
}