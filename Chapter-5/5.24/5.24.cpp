#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double amount, rate;
	int years;

	cout << "Loan Amount: ";
	cin >> amount;

	cout << "Number of Years: ";
	cin >> years;

	cout << "Annual Interest Rate: ";
	cin >> rate;

	double monthlyInterestRate = (0.01 * rate) / 12;

	double monthlyPayment = amount * monthlyInterestRate /
		(1 - 1 / pow(1 + monthlyInterestRate, years * 12));

	double totalPayment = monthlyPayment * years * 12;

	cout << fixed << "Monthly Payment: $" << setprecision(5) << monthlyPayment << endl;

	cout << fixed << "Total Payment: $" << setprecision(2) << totalPayment << endl;

	cout << left << setw(11) << "Payment#" << setw(11) << "Interest"
		<< setw(12) << "Principal" << "Balance" << endl;

	for (int i = 1; i <= years * 12; i++) {

		double monthlyInterest = monthlyInterestRate * amount;

		double principal = monthlyPayment - monthlyInterest;

		amount = amount + monthlyInterest - monthlyPayment;

		cout << left << fixed << setw(11) << i
			<< setw(11) << setprecision(2) << monthlyInterest
			<< setw(12) << principal << amount << endl;
	}

	return 0;
}