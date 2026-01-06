#include <iostream>

using namespace std;

int main() {

	double amount, annualInterestRate;
	int months;

	cout << "Enter the amount: ";
	cin >> amount;

	cout << "Enter the annual interest rate: ";
	cin >> annualInterestRate;

	cout << "Enter the number of months: ";
	cin >> months;

	double monthlyInterestRate = 0.01 * annualInterestRate / 12;

	double balance = 0;
	for (int i = 1; i <= months; i++) {
		balance = (balance + amount) * (1 + monthlyInterestRate);
		cout << "Balace after month " << i << ": $" << balance << endl;
	}

	return 0;
}