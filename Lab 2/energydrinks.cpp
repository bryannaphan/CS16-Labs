/* 
 * File:   energydrinkers.cpp
 * Author: Bryanna Phan
 * Created on June 23, 2015, 5:39 PM
 * Purpose:  Homework, Energy Drinkers
 */

// system libraries
#include <iostream> // I/O library
using namespace std; // namesapce for iostream
// user libraries
// global constants
const float conv = 100.0f; // conversion percentage
// function prototypes

// exeuction begins:
int main() {
	unsigned short cust_surv = 12467; // number of customers surveyed
	unsigned short edrinks; // number of customers drink 1 or more energy drinks/week
	unsigned short cdrinks; // number of energy drinkers that perfer citrus flavor
	unsigned char per_edrinks = 14; // percentage surveyed that perfer energy drniks
	unsigned char per_cdrinks = 64; // percentage of energy drinks that prefer citrus flavor

	// calculate the number of drinks
	edrinks = cust_surv * per_edrinks / conv;
	cdrinks = cust_surv * per_cdrinks / conv;
	
	// output the results
	cout << "Number of Energy Drinks = " << edrinks << endl;
	cout << "Number of Citrus Drinkers = " << cdrinks << endl;

	return 0;
}