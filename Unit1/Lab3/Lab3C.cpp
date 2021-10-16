/* Name: Ariel Ong
 * Date: September 11, 2020
 * Professor: Shrestha
 * Description: This program will read the file */ 

#include<iostream>
using namespace std;
int main () {
        int a; //Listing out variables
	int b;
        double c;
	double d;
	
	printf("Enter integer variables a and b\n"); //Printing integers
	scanf ("%i %i", &a, &b);                     //Reading integers

	printf("Enter double variables c and d\n");  // Printing double
	scanf ("%lf %lf", &c, &d);                   //Reading double

	printf("You just entered %i, %i\n", a, b );  //Reading values again
        printf("You just entered %lf, %lf\n", c, d); //Reading values again

        a = a + b;        //writing forumulas 
        d = d / a; 
	c = 5 * c;
        b = b % a; 
        c = c - a; 
	
	printf("Your variables for a = %i, b = %i, c = %lf, d = %8.3lf\n", a, b, c, d); //final result 

	return 0;
}
