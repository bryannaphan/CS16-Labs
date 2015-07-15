/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8, 2015, 10:45 AM
 * Purpose:  Retirement Calculator
 */

//System Library
#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
void heading (string, string, string, string, string);
void retirement(float&, float&, float&); 
float table(); 

//Execution Begins Here!
int main(int argc, char** argv) {

    // Function table 
    table(); 

    // Exit Stage Right
    return 0; 
}


void heading(string year, string date, string savings, string invs, string deposit)
{
    cout << "Year   Date          Beginning of Yr   End of Yr     End of Yr" << endl; 

    cout << setw(30) << "Savings"
    << setw(17) << "Interest"
    << setw(13) << "Deposit" << endl; 

    cout << " " << endl; 
    return;     
}

void retirement(float &retire, float &savings, float &deposit)
{
    float salary = 1000000; // Average salary in $'s 
    float inv_rt = 0.06f; // investment rate (see cali muni bonds)
    float depos_rt = 0.20f; // percent deposited of gross salary 

    // Calculate required savings
    retire = salary / inv_rt; // Required Savings

    // Calculate savings
    deposit = salary * depos_rt; // Deposit based salary
    savings *= (1 + inv_rt); // Earning based on investment rate 
    savings += deposit; // Adding deposit after interest earned 

    return; 
}


float table()
{
    float retire, // Savings required for retirement in $ 
    savings = 0, // Initial savings at start of employment 
    deposit = 0, // Yearly deposit in $ 
    inv_rt = 0.06f; // Investment rate (see Cali Muni Bonds)
    short year = 0; // Number of years required to retire
    float interest; 
    int date = 18; // Starting year of saving

    heading("Year", " Date", "Savings", "Interest", "Deposit"); 

    for (float i=0; year<31; i++)
    {
        date++;
        year++;
        retirement(retire, savings, deposit); 
        interest = savings * inv_rt; 


        if (year < 10)
        {
           cout << year-1 << "   " << "06/01/" << date-1 << "         " 
           << savings << "             " << interest << "          " << deposit << "      " << endl;
        }
        else 
        {
            cout << year << "  " << "06/01/" << date << "         " 
            << savings << "             " << interest << "          " << deposit << "      " << endl;
        }

    }

    return 0; 

}





