#include "header.h"

//default constructor
date::date() {
	cmonth = 0;
	cday = 0;
	cyear = 0;
}
//definition of set function of date class
void date::set(int m, int d, int y) {
		cmonth = m;
		cday = d;
		cyear = y;
	}
//definition of get function of date class
string date::get() {
		return to_string(cmonth) + '/' + to_string(cday) + '/' + to_string(cyear);
	}
