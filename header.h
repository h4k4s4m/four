#pragma once //only compiles the header once or something

//standard stuff to include
#include <iostream>
#include <string>
//save myself the trouble of putting std:: infront of certain things throughout my code
using namespace std;

//date class used inside of employees and employees children classes
class date {
	int cmonth; //variables used are simple int's and depends on the code to input the date in the correct format
	int cday;
	int cyear;
public:
	date(); //standard constructor
	void set(int, int, int); //set the date
	string get(); //returns a formated string with the date
};

//employee class used as on its own as well as as a base class for programmer and architect classes
class employee {
	string cname;//declaring variables used throughout the employee and child of employee classes
	int cid;
	string cphoneNumber;
	int cage;
	string cgender;
	string cjobTitle;
	string csalary;
	
public:
	date chireDate;
	//declaring child classes so they can access private data members
	friend class programmer;
	friend class architect;
	//friending check numbers to access private member cphoneNumber
	friend bool checkPhoneNumbers(employee, programmer);
	//Operator overloading
	friend ostream &operator << (ostream &output, const employee& d);
	//Operator overloading
	bool operator ==(employee a);
	void operator +(const int);
	//default and initialized constructors
	employee();
	employee(string name, int id, string phoneNumber, int age, string gender, string jobTitle, string salary, date hireDate);
	//full definitions of functions due to the small size of the definitions
	void changeName(string name) { cname = name; }
	void changeID(int id) { cid = id; }
	void changePhoneNumber(string phone) { cphoneNumber = phone; }
	void changeAge(int age) { cage = age; }
	void changeGender(string gender) { cgender = gender; }
	void changeJobTitle(string title) { cjobTitle = title; }
	void changeSalary(string salary) { csalary = salary; }
	void changeHireDate(int m, int d, int y) { chireDate.set(m, d, y); }
	//function prototyped due to longer definition
	//prints a formated piece of text with all relevant information
	void print();
	void addAge(int);
};

//programmer class is derived from and is friend of employee class
class programmer : employee {
	int cdeptNumber; //additional variables that are added to the employee class to make it a programmer class
	string csupervisorName;
	int csalaryIncrease;
	bool ccplusplus;
	bool cjava;
public:
	friend bool checkPhoneNumbers(employee, programmer);
	programmer();
	programmer(string name, int id, string phoneNumber, int age, string gender, string jobTitle, string salary, date hireDate, int dept, string sup, int sal, bool cpp, bool java);
	void changeDeptNumber(int dept) {cdeptNumber = dept;}
	void changeSupervisor(string sup) {csupervisorName = sup;}
	void changeSalaryIncrease(int sal) {csalaryIncrease = sal;}
	void changeCPlusPlusExperience(bool cpp) {ccplusplus = cpp;}
	void changeJavaExperience(bool java) {cjava = java;}
	void print();
};

//architect class is derived from and is friend of employee class
class architect :employee {
	int cdeptNumber;
	string csupervisorName;
	int csalaryIncrease;
	int cyearsExp;
public:
	architect();
	architect(string name, int id, string phoneNumber, int age, string gender, string jobTitle, string salary, date hireDate, int dept, string sup, int sal, int years);
	void changeDeptNumber(int dept) {cdeptNumber = dept;}
	void changeSupervisor(string sup) {csupervisorName = sup;}
	void changeSalaryIncrease(int sal) {csalaryIncrease = sal;}
	void changeYearsExperience(int years) {cyearsExp = years;}
	void print();
};

//checks phone numbers of object types employee and programmer
bool checkPhoneNumbers(employee, programmer);