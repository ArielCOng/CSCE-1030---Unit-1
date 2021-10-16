/*
Author: Ariel Ong (spring3828@gmail.com)
Date: September 17, 2020
Instructor: Professor Shrestha
Description: this program determiens the academic standing of a student based on the input of credit hours 
*/

#include <iostream>
using namespace std;

int main(){

	int creditHours;//Declaring the variable
	
	cout << "Enter number of credit hours: " << endl; //output
	cin >> creditHours;//user input needed

	creditHours = (creditHours/10);

 switch (creditHours) {
	case 0:                                     //Freshmen hours are 0-29 hours
	case 1:
	case 2:
		cout << "You are a freshman" << endl;
		break;
	case 3:                                     //Sophmore hours are 30-59 hours
	case 4:
	case 5:
		cout << "You are a sophmore" << endl;
		break;
	case 6:                                     //Juniors hours are 60-89 hours
	case 7:
	case 8:
		cout << "You are a junior" << endl;
		break;
	case 9:                                     //Senior hours are 90-119 hours 
	case 10:
	case 11:
		cout << "You are a senior" << endl;
		break;

	default :
		cout << "You are a Graduating Senior" << endl; //Graduating hours are 120+ hours 
		break;
}
	return 0;
}
