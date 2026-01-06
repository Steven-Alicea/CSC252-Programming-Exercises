#include <iostream>

using namespace std;



int main() {
	double distance, mpg, ppg, cost;

	cout << "Enter the driving distance: ";
	cin >> distance;

	cout << "Enter the miles per gallon: ";
	cin >> mpg;

	cout << "Enter the price per gallon: ";
	cin >> ppg;

	cost = (distance / mpg) * ppg;

	cout << "The cost of driving is $" << cost;


	return 0;
}
