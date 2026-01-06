#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double amount, apy;
	int months;

	cout << "Enter the initial deposit amount: ";
	cin >> amount;

	cout << "Enter annual percentage yield: ";
	cin >> apy;

	cout << "Enter maturity period (number of months): ";
	cin >> months;

	cout << endl << left << setw(7) << "Month" << "CD Value" << endl;

	for (int i = 1; i <= months; i++) {
		amount += amount * apy / 1200;
		cout << left << fixed << setw(7) << i << setprecision(2) << amount << endl;
	}

	return 0;
}