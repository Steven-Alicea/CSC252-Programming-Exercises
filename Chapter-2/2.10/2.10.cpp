#include <iostream>

using namespace std;



int main() {
	double water, initial_temperature, final_temperature, energy;

	cout << "Enter the amount of water in kilograms: ";
	cin >> water;

	cout << "Enter the initial temperature: ";
	cin >> initial_temperature;

	cout << "Enter the final temperature: ";
	cin >> final_temperature;

	energy = water * (final_temperature - initial_temperature) * 4184;

	cout << "The energy needed is " << energy;


	return 0;
}