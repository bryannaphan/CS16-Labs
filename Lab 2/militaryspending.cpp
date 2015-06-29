/* 
 * File:   militaryspending.cpp
 * Author: Bryanna Phan
 * Created on June 23, 2015, 5:39 PM
 * Purpose:  Homework, Military Spending
 */

// system libraries
 #include <iostream> // I/O library

 using namespace std; // namespace for iostream

 // user libraries
 // global constants

 const unsigned char conv = 100; // conversation to percentage
// function prototype

// execution begins: 
 int main () {

 	// delcare variables
 	float milt, fed, per_milt;

 	// initialize values from reference website
 	// https://www.whitehouse.gov/sites/default/files/
 	// omb/budget/fy2015/assets/tables.pdf


 	milt = .6060; // military spending in trillion $
 	fed = 3.800; // federal spending in trillion $
 	
 	// calculate percentage of federal budget
 	per_milt = (milt/fed) * conv; 

 	// output results
 	cout << "Percentage of the Federal Budget spent on the Military = "
 	<< per_milt << " %" << endl; 

 	// exit
 return 0;
 }