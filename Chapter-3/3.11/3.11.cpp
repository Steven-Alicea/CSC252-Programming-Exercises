#include <iostream>

using namespace std;



int main() {
	double weight, cost;

	cout << "Enter the weight of the package: ";
	cin >> weight;

	if (weight > 50)
		cout << "The package cannot be shipped" << endl;
	else if (10 < weight && weight <= 20) {
		cost = 10.5 * weight;
		cout << "The cost to ship the package is: $" << cost;
	}
	else if (3 < weight && weight <= 10) {
		cost = 8.5 * weight;
		cout << "The cost to ship the package is: $" << cost;
	}
	else if (1 < weight && weight <= 3) {
		cost = 5.5 * weight;
		cout << "The cost to ship the package is: $" << cost;
	}
	else if (0 < weight && weight <= 1) {
		cost = 3.5 * weight;
		cout << "The cost to ship the package is: $" << cost;
	}


	return 0;
}