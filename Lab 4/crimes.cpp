/*
* Name: crimes.cpp
* Author: Bryanna Phan
* Date Created: June 25, 2015 12:21 AM
* Purpose: To calculate the percentage of violent crime to the population
* Lab 4
*/ 

// system libraries
#include <iostream> // I/O library
using namespace std; // namespace for iostream

// user libraries
// global constants
const float conv = 100.00f;
// function prototypes

// exeuction begins here:
int main() {

	// declare varables
	float US_crm = 11.88, // US violent crimes in million
	ENG_crm = 6.52, // England violent crimes in million
	USpop = 318, // US population in million
	ENGpop = 64, // England population in million 
	US_perc, // US percentage of violent crime to population
	ENG_perc; // England percentage of violent crime to population
	
	// source:
	// http://www.nationmaster.com/
	// country-info/stats/Crime/Total-crimes#date


	// calculate the percentage of violent crime to the population
	// in two decimal places

	US_perc = US_crm/USpop * conv;
	ENG_perc = ENG_crm/ENGpop * conv; 

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "The percentage of violent crime to the United State's population is "
	<< US_perc << "%." << endl;
	cout << "The percentage of violent crime to England's population is "
	<< ENG_perc << "%." << endl;

return 0;
}