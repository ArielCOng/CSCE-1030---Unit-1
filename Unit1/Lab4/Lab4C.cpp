/*
Author: Ariel Ong
Date: 9/17/2020
Instructor: Professor Shrestha
Description: This program will state whether the user guessed the computer's favorite color
*/

#include <iostream>
using namespace std;

int main ()
{
        srand(time(NULL)); 

	int  my_color = (rand() %6); //integers 
	int guess; 


	enum color {RED = 0, ORANGE, YELLOW, GREEN, BLUE, PURPLE}; //enumeration : color	

	static_cast<color>(my_color); //type casting my_color

	cout << "Can you guess my favorite color? " << endl; //output for user
	cout << "Enter 0 = Red, 1 = Orange, 2 = Yellow, 3 = Green, 4 = Blue, 5 = Purple: " << endl;
	cin >> guess; //to prompt input from user

	if (my_color == guess)  //if else statment for if color is correct
	{
		cout << "Correct! My color is ";
	}
	else
	{
		cout << "Sorry, my color is ";
	}

	switch (my_color)           //switch statements for the remainder part of the output sentence
	{
		case color::RED:
			cout << "Red";
			break;
		case color::ORANGE:
			cout << "Orange";
			break;
		case color::YELLOW:
			cout << "Yellow";
			break;
		case color::GREEN:
			cout << "Green";
			break;
		case color::BLUE:
			cout << "Blue";
			break;
		default: 
			cout << "Purple";
	}

	cout << my_color << "." << endl;
	
	return 0;
}
