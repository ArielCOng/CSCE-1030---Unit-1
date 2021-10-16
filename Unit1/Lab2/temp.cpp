#include <iostream>
using namespace std;

int main () {
        /* 
	 This program was made in order to calculate the surface area of a cylinder.
	 All the measurements need to be in centimenters. Declare radius, height,
	 area, and pi. You must set the value of pi. Then write the code in order to
	 prompt the desired measurements. Then write the code that will be seen
	 by the user. 
	 */
	float radius;
	float height;
	float area;
        float pi;

        pi = 3.14159;

	cout << "Enter radius in centimeters: ";
        cin  >>	radius;

	cout << "Enter height in centimeters: ";
	cin  >> height;

        area = 2 * pi * radius * (radius + height); 

 	cout << "The surface " << area << " square cm." << endl; 	



	return 0;
}

