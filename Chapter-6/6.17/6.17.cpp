#include <iostream>
#include <cmath>

using namespace std;



bool isValid(double side1, double side2, double side3) {
	return  (side1 + side2 > side3)
		&& (side1 + side3 > side2)
		&& (side2 + side3 > side1);
}

double area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}


int main() {
	double side1, side2, side3;
	cout << "Enter 3 sides: ";
	cin >> side1 >> side2 >> side3;

	if (isValid(side1, side2, side3))
		cout << "Area of triangle is: " << area(side1, side2, side3) << endl;
	else
		cout << "Invalid Input" << endl;


	return 0;
}