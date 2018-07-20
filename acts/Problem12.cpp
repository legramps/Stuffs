/*
Name        :  Mark Gregory A. Plantado
Date        :  July 20, 2018
Filename    :  Problem12.cpp
Description :  This program will compute the total earned salary based on the hours you worked on.
*/



#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    
    int dependents;
    double salary 	 = 	16.78,
		   hours,
		   grossPay,
    	   socialTax = 	0.06,
		   fedTax 	 = 	0.14,
		   stateTax  = 	0.05,
		   netPay,
		   unionDues = 10.0;
		   

    // inputing the data
    cout << 
    	 	"==========================================" << endl;
    cout << " Enter your name : "; cin >> name;
    cout << " Enter how many hours you've worked : "; cin >> hours;
    cout << " Enter how many dependents : "; cin >> dependents;
    cout <<	"==========================================" << endl;
    
    cout << endl
		 <<	"            Your Information              " << endl << endl;

    // computation
    double overtimePay = 0;
    if (hours > 40)
    {
    	if ( dependents >= 3)
    	{
    		overtimePay = ( hours - 40);
    		overtimePay = overtimePay * ( salary * 1.5);
    		grossPay = ( hours * salary ) + overtimePay;
    		hours = 40;
    		cout << " Gross pay		 : " << grossPay << endl;
    		
    		socialTax = (grossPay * socialTax);
    		cout << " Social tax		 : " << socialTax << endl;
    		
    		fedTax = ( fedTax * grossPay);
    		cout << " Federal Tax		 : " << fedTax << endl;
    		
    		stateTax = ( stateTax * grossPay);
    		cout << " State Tax		 : " << stateTax << endl;
    
    		netPay = grossPay - socialTax - fedTax - stateTax - unionDues - 35;
    		cout << " Net pay 		 : " << netPay << endl;
    		
    cout <<	"==========================================" << endl;
		}
		else 
		{
    		overtimePay = ( hours - 40);
    		overtimePay = overtimePay * ( salary * 1.5);
    		grossPay = ( hours * salary ) + overtimePay;
    		hours = 40;
    		cout << "Gross pay		: " << grossPay << endl;
    		
    		socialTax = (grossPay * socialTax);
    		cout << "Social tax		: " << socialTax << endl;
    		
    		fedTax = ( fedTax * grossPay);
    		cout << "Federal Tax		: " << fedTax << endl;
    		
    		stateTax = ( stateTax * grossPay);
    		cout << "State Tax		: " << stateTax << endl;
    
    		netPay = grossPay - socialTax - fedTax - stateTax - unionDues;
    		cout << "Net pay 		: " << netPay << endl;
    		
    cout <<	"==========================================" << endl;

		}

    }
	else if ( hours <= 40 )
	{

    	if ( dependents >= 3)
    	{

			grossPay = ( hours * salary);
			cout << "Gross pay 		: " << grossPay << endl;
			
    		socialTax = (grossPay * socialTax);
    		cout << "Social tax		: " << socialTax << endl;
    		
    		fedTax = ( fedTax * grossPay);
    		cout << "Federal Tax		: " << fedTax << endl;
    		
    		stateTax = ( stateTax * grossPay);
    		cout << "State Tax		: " << stateTax << endl;
    
    		netPay = grossPay - socialTax - fedTax - stateTax - unionDues - 35;
    		cout << "Net pay 		: " << netPay << endl;

    cout <<	"==========================================" << endl;
		}
		else 
		{

			grossPay = ( hours * salary);
			cout << "Gross pay		: " << grossPay << endl;
    		
    		socialTax = (grossPay * socialTax);
    		cout << "Social tax		: " << socialTax << endl;
    		
    		fedTax = ( fedTax * grossPay);
    		cout << "Federal Tax		: " << fedTax << endl;
    		
    		stateTax = ( stateTax * grossPay);
    		cout << "State Tax		: " << stateTax << endl;
    
    		netPay = grossPay - socialTax - fedTax - stateTax - unionDues;
    		cout << "Net pay 		: " << netPay << endl;
    		cout <<	"==========================================" << endl;

		}
	}



return 0;
}
