//============================================================================
// Name        : HW04
// Author      : Sahm Samarghandi
// Version     : 0.2
// Copyright   : Dun Steal Dis Code (2017)
// Description : This program uses classes to create objects using both default
//				 and non default constructors and now includes comparison operators
// Input       : NONE
// Output      : Employee, Programmer, and Architect object values from both
//               default and non default contructors
//============================================================================

#include "header.h"

int main()
{
	//creating default and non default instances of each type of class
	employee empDefault;
	date hireDate;
	hireDate.set(9, 7, 2017);
	employee empInit("Sahm", 7, "949-555-6855", 25, "Male", "Student", "$-20,000", hireDate);
	hireDate.set(1, 15, 2018);
	programmer progDefault;
	programmer progInit("Sahm", 8, "949-555-6855", 26, "Male", "Programmer", "$24,000", hireDate, 1, "John Kath", -20, true, true);
	hireDate.set(12, 31, 2019);
	architect archDefault;
	architect archInit("Sahm", 9, "949-555-6855", 26, "Male", "Architect", "$48,000", hireDate, 2, "John Kath", 100, 3);

	//printing default objects
	empDefault.print();
	progDefault.print();
	archDefault.print();

	//printing initialized objects
	empInit.print();
	progInit.print();
	archInit.print();

	//changing and printing initialized objects
	empInit.changeAge(60);
	empInit.print();
	progInit.changeCPlusPlusExperience(false);
	progInit.print();
	archInit.changeYearsExperience(100);
	archInit.print();

	cout << checkPhoneNumbers(empInit, progInit) << endl;
	cout << (empInit == empInit) << endl;
	empInit.changePhoneNumber("949-111-2094");
	cout << checkPhoneNumbers(empInit, progInit) << endl;
	cout << (empDefault == empInit) << endl;

	empInit.addAge(4);
	empInit + 2;

	cout << empInit;

    return 0;
}

bool checkPhoneNumbers(employee a, programmer b) {
	return a.cphoneNumber == b.cphoneNumber;
}
