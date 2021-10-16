
/*
 * Author: Ariel Ong 
 * Date: 9/9/ 2020
 * Class: CSCE 1030.301-396 (6679) 
 * Instructor: Professor Shrestha 
 * Description: I will revise teh code given to me and fill in the missing code. My task is to:
 * 1) declare variable var1 as an integer
 * 2) var2 as a character
 * 3) var3 and var4 as float
 * 4) assign var1 an integer betwee 50 and 100
 * 5) assign var2 to be "O" 
 * 6) assign var3 = 2.5 
 * 7) make var4 the result of an artithmetic expression (cout)
 * 8) make sure to put an endline after the result 
 *  */

#include <iostream>
using namespace std; 

int main ()
{
	int var1;                   // I am declaring the variables here 
	char var2;
	float var3;
	float var4;

	var1 = 75;                 //I am now initializing the variables here
	var2 = 'O';
	var3 = 2.5;
                 
        var4 = var3 + var2 % var1; //I am setting the equation for var4

        cout <<  "var4 equals " << var4 << endl;  //This is what will be shown	

	return 0; 
}
