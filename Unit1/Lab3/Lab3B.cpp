/*
Author: Ariel Ong
Date: September 11, 2020 
Instructor: Professor Shrestha 
Description: The program will calculate the bonus of a worker. The user must enter the name of the person. 
 * */

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime> 
using namespace std; 

int main() {

	string name;  //declaring variables
	double salary;
	int rate;
	double bonus;
         
	srand(time(0)); 
	rate = rand() % 5 + 1;

        cout << "Insert name: "<< endl;
	getline(cin, name);

	cout << "Salary of the employee: " << endl;
	cin >> salary; 
        

       	bonus = salary *((static_cast<double>(rate))/100);	
   

        cout << name << " earned a bonus of "<< bonus << endl;


	return 0;
}
