#include <iostream>
using namespace std;

int main()
{
    int  time_period, rateOfinterest;
    float SimpleInterest,principle_amount;
    
    /*Now lets gather the input from the user */

    cout << "Enter the principal amount: ";
    cin >> principle_amount; /*Collecting the principle amount from the user*/
    cout << "Enter the time period(in years): ";
    cin >> time_period; /*Collecting the time period from the user*/
    cout << "Enter the rate of interest: ";
    cin >> rateOfinterest;  /*collecting the rate of interest from the user*/


    /*Now lets calculate the Simple Interest from the given input from the user s=p*r*t/100*/
    
    SimpleInterest = (principle_amount * time_period * rateOfinterest)/100;
    
    /*Now lets print the Simple Interest that we have calculated in the above  lines of code*/

    cout << "Simple Interest = " << SimpleInterest << endl;
    return 0;
}