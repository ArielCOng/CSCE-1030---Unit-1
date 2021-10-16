/*
 Author: Ariel Ong spring3828@gmail.com
 Date: 9/16/2020
 Instructor: Professor Shrestha
 Description: This program calculates the discount for cookies based off of the amount purchased. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num_cookies; //Declaring num_cookies as integer
	int num_dozen;
	float total_cost;
	const float STANDARD_PRICE = 0.89; 

	cout << "Enter the number of cookies you would like: " <<endl; //Prompting for how many cookies desired
	cin >> num_cookies;

	num_dozen = num_cookies/12;    //making "num_dozen" equal to the "num_cookies/12" 
        
	cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2); 

	if ((num_cookies < 12)&&(num_cookies> 0)) //If statement for customers who did not buy at least one dozen cookies
	{
	        total_cost = num_cookies * STANDARD_PRICE; 
		cout << "You get no discount, so the price is: $ " << total_cost << endl;
	}
	

      	else if ((num_dozen >= 1)&&(num_dozen < 5))  //If statement for customers who brought 1-5 dozen cookies
	       	{ 
			total_cost = num_cookies* (STANDARD_PRICE) * 0.9;
			cout << "Congratulations, you get a 10% discount! You pay: $" << total_cost << endl;

		}
	
 	else if (num_dozen >= 5) //if statement for 5+ dozen of cookies  
		{
			total_cost = num_cookies * (STANDARD_PRICE)  * 0.75;
			cout << "Congratulations! You get a 25% discount! You pay: $" << total_cost << endl; 
		}
               
	else
       	{
		cout << "Error, buy more cookies." <<endl; //for negative or zero cookies
        }
		return 0;
}
