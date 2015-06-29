/*
* File: Freefall.cpp
* Author: Bryanna Phan
* Created on June 23, 2015, 12:15 AM
* Purpose: Homework, Free Fall
*/

// system libraries
#include <iostream> // I/O library
using namespace std; // namespace for iostream

// user libraries
// global constants
const float grav = 3.2174e1f; // acceleration due to gravity on Earth (ft/sec^2)
// function prototypes

// execution begins here:
int main (int argc, char** argv) {
	float dist, tme; // declare variables 
	// dist = distance dropped in feet
	// tme = time in seconds

	// user prompt then input time 
	cout << "To calculate the distance dropped," << endl;
	cout << "input the time in seconds." << endl;
	cout << "The time should be in floating point format" << endl; 
	cin >> tme; 

	// calculate the free-fall distance
	//dstnce=1/2 * GRAV * time * time;		//Incorrect ***!!!!!
											// (1/2) INTEGER = 0 because it rounds down
    //dstnce=1.0f/2 * GRAV * time * time;	//Correct
    //dstnce=1/2.0f * GRAV * time * time;	//Correct
	dist = 1.0f/2 * grav * pow (tme, 2); 

	// output results
	cout << "The distance traveled = " << dist << "(ft)" << endl;
	// exit 

return 0;
}