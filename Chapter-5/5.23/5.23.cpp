#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	double amount, rate = 5.0;
	int years;

	cout << "Loan Amount: ";
	cin >> amount;

	cout << "Number of Years! ";
	cin >> years;

	cout << left << setw(16)  << "Interest Rate"
		<< setw(18) << "Monthly Payment" 
		<< "Total Payment" << endl;
	

	while (rate <= 8.0) {
		double monthlyInterestRate = (0.01 * rate) / 12;

		double monthlyPayment = amount * monthlyInterestRate /
			(1 - 1 / pow(1 + monthlyInterestRate, years * 12));

		double totalPayment = monthlyPayment * years * 12;

		cout << left << fixed
			<< setprecision(3) << rate << setw(11) << "%"
			<< "$" << setw(17) << setprecision(2) << monthlyPayment 
			<< "$" << setprecision(2) << totalPayment << endl;

		rate = rate + (1.0 / 8.0);
	}

	return 0;
}