
/* 
 * File:   check.cpp
 * Author: Bryanna Phan
 * Purpose: create parallel arrays
 * Created on July 16, 2015, 12:14 AM
 */

// System Libraries
#include <iostream>
#include <iomanip> // library for setw 

 using namespace std; 

// User Libraries
// Global Constants
// Function Prototypes

int main()
{
	// declaring array 
	short num[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, square[12];

	for (int i=0; i<12; i++)
	{
		square[i] = num[i]*num[i];
		cout << num[i] << " * " << num[i] << '\t' << " = " << '\t' << square[i] << endl; 
	}

	return 0;
}