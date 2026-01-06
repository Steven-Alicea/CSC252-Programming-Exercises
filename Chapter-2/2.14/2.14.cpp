#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double weight, height, bmi;

	cout << "Enter weight in pounds: ";
	cin >> weight;

	cout << "Enter height in inches: ";
	cin >> height;

	bmi = (weight * 0.45359237) / (pow(height * 0.0254, 2));

	cout << "BMI is " << bmi << endl;


	return 0;
}