/* 
 * File:   array.cpp
 * Author: Bryanna Phan
 * Purpose: Print out a multplication table 
 * Created on July 16, 2015, 2:14 pM
 */

// System Libraries
#include <iostream>
#include <iomanip>

 using namespace std; 

// User Libraries
// Global Constants
// Function Prototypes

int main()
{
	// declaring array 
	int table[13][13];

	// filling the arrays by assigning each element
	for (int i = 0; i < 13; i++)
	{
	  table[0][i] = i;
	  table[i][0] = i;
	}

	for (int k = 1; k < 13; k++)
	{
	  for (int l = 1; l < 13; l++)
	  {
	    table[k][l] = k * l;
	  }
	}

	for (int m = 0; m < 13; m++)
	{
	  for (int n = 0; n < 13; n++)
	    cout << setw(4) << table[m][n] << " ";
	  cout << endl;
	}

	return 0;
}