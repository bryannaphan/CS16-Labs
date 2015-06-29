/*
* File: gas.cpp
* Author: Bryanna Phan
* Created on June 24, 2015, 7:32 AM
* Purpose: Homework, Calculating Gas with and without Tax
*/

// system libraries
#include <iostream> // I/O library
using namespace std; // namespace for iostream

// user libraries
// global constants
// function prototypes

// execution begins here:
int main(int argc, char** argcv) {

	// declare variables
	float fed_tax = 0.18f; // federal tax $'s
	float cal_tax = 0.36f; // california tax $'s
	float csales_tax = 0.08f; // california sales tax 8%
	float gal = 3.69f; // price of a gallon of gas $'s w/ all tax included
	float noTaxGal, gal_tax; 

	// calulate the base price ($) of a gallon of gas w/o tax
	noTaxGal = (gal - (fed_tax + cal_tax)) * (1 - csales_tax);

	// calculate the tax ($) per gallon of gas
	gal_tax = noTaxGal / gal;

	cout << "The price of a gallon of gas without tax is " << noTaxGal << "." << endl;
	cout << "The price of tax per gallon of gas is " << gal_tax << "." << endl; 

return 0;
}

