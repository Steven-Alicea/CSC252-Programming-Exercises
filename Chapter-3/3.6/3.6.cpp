#include <iostream>

using namespace std;



int main() {
	// 3.2 Start
	/*
	cout << "Enter weight in pounds: ";
	double weight;
	cin >> weight;

	cout << "Enter height in inches: ";
	double height;
	cin >> height;

	const double KILOGRAMS_PER_POUND = 0.45359237;
	const double METERS_PER_INCH = 0.0254;

	double weightInKilograms = weight * KILOGRAMS_PER_POUND;
	double heightInMeters = height * METERS_PER_INCH;
	double bmi = weightInKilograms / (heightInMeters * heightInMeters);

	cout << "BMI is " << bmi << endl;
	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi < 25)
		cout << "Normal" << endl;
	else if (bmi < 30)
		cout << "Obese" << endl;
	*/
	//3.2 End

	
	double weight, feet, inches, height, weightInKilograms, heightInMeters, bmi;
	const double KILOGRAMS_PER_POUND = 0.45359237;
	const double METERS_PER_INCH = 0.0254;

	cout << "Enter weight in pounds: ";
	cin >> weight;

	cout << "Enter feet: ";
	cin >> feet;

	cout << "Enter inches: ";
	cin >> inches;

	height = (feet * 12) + inches;


	weightInKilograms = weight * KILOGRAMS_PER_POUND;
	heightInMeters = height * METERS_PER_INCH;
	bmi = weightInKilograms / (heightInMeters * heightInMeters);

	cout << "BMI is " << bmi << endl;
	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi < 25)
		cout << "Normal" << endl;
	else if (bmi < 30)
		cout << "Obese" << endl;


	return 0;
}