/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 29, 2015, 12:43 PM
 * Purpose:  To the show the truth
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables
    bool x,y;
    
    //Output the heading of the table
    cout << "The Truth Table" << endl;
    cout << " " << endl; 
    
    cout << "X " << setw(3)
         << " Y " << setw(3)
         << " !X " << setw(3)
         << " !Y " << setw(3)
         << " X&&Y " << setw(3)
         << " X||Y " << setw(3)
         << " X^Y " << endl; 
    
    //Row 1 output
    x = true; y = true;
    cout << (x?'T':'F') << setw(3); 
    cout << (y?'T':'F') << setw(3); 
    cout << (!x?'T':'F') << setw(4); 
    cout << (!y?'T':'F') << setw(5); 
    cout << (x&&y?'T':'F') << setw(6); 
    cout << (x||y?'T':'F') << setw(6); 
    cout << (x^y? 'T':'F') << endl; 

    //Row 2 output
    x = true; y = false;
    cout << (x?'T':'F') << setw(3); 
    cout << (y?'T':'F') << setw(3);
    cout << (!x?'T':'F') << setw(4);
    cout << (!y?'T':'F') << setw(5);
    cout << (x&&y?'T':'F') << setw(6);
    cout << (x||y?'T':'F') << setw(6);
    cout << (x^y? 'T':'F') << endl; 
    
    //Row 3 output
    x = false; y = true;
    cout << (x?'T':'F') << setw(3); 
    cout << (y?'T':'F') << setw(3); 
    cout << (!x?'T':'F') << setw(4); 
    cout << (!y?'T':'F') << setw(5); 
    cout << (x&&y?'T':'F') << setw(6); 
    cout << (x||y?'T':'F') << setw(6); 
    cout << (x^y? 'T':'F') << endl; 
    
    //Row 4 output
    x = false; y = false;
    cout << (x?'T':'F') << setw(3); 
    cout << (y?'T':'F') << setw(3); 
    cout << (!x?'T':'F') << setw(4); 
    cout << (!y?'T':'F') << setw(5); 
    cout << (x&&y?'T':'F') << setw(6); 
    cout << (x||y?'T':'F') << setw(6); 
    cout << (x^y? 'T':'F') << endl; 

    
    cout << " " << endl; // break inbetween 
    
    
    //more boolean expressions
    cout << "(X^Y)^Y " << setw(3)
    << " (X^Y)^X " << setw(3)
    << " !(X&&Y) " << setw(3)
    << " !X||!Y " << setw(3)
    << " !(X||Y) " << setw(3)
    << " !X&&!Y" << endl;
    
    // row 1 output 
    x = true; y = true;
    cout << setw(4) << ((x^y)^y? 'T':'F') << setw(9); 
    cout << ((x^y)^x? 'T':'F') << setw(8); 
    cout << (!(x&&y)? 'T':'F') << setw(10); 
    cout << (!x||!y? 'T':'F') << setw(8); 
    cout << (!(x||y)? 'T':'F') << setw(8); 
    cout << (!x&&!y? 'T':'F') << endl; 
    
    // row 2 output
    x = true; y = false; 
    cout << setw(4) << ((x^y)^y? 'T':'F') << setw(9);
    cout << ((x^y)^x? 'T':'F') << setw(8);
    cout << (!(x&&y)? 'T':'F') << setw(10);
    cout << (!x||!y? 'T':'F') << setw(8);
    cout << (!(x||y)? 'T':'F') << setw(8);
    cout << (!x&&!y? 'T':'F') << endl; 
    
    // row 3 output 
    x = false; y = true;
    cout << setw(4) << ((x^y)^y? 'T':'F') << setw(9); 
    cout << ((x^y)^x? 'T':'F') << setw(8); 
    cout << (!(x&&y)? 'T':'F') << setw(10); 
    cout << (!x||!y? 'T':'F') << setw(8); 
    cout << (!(x||y)? 'T':'F') << setw(8); 
    cout << (!x&&!y? 'T':'F') << endl; 
    
    // row 4 output 
    x = false; y = false;
    cout << setw(4) << ((x^y)^y? 'T':'F') << setw(9); 
    cout << ((x^y)^x? 'T':'F') << setw(8); 
    cout << (!(x&&y)? 'T':'F') << setw(10); 
    cout << (!x||!y? 'T':'F') << setw(8); 
    cout << (!(x||y)? 'T':'F') << setw(8); 
    cout << (!x&&!y? 'T':'F') << endl; 
    return 0;
}