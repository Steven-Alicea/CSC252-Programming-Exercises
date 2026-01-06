#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



double futureInvestmentValue(double investmentValue, double monthlyInterestRate, int years) {
	double futureInvestmentValue = investmentValue * pow((1 + monthlyInterestRate), (years * 12));

	cout << left << setw(8) << "Years" << "Future Value" << endl;

	for (int i = 1; i <= years; i++) {
		cout << left << fixed << setw(8) << i << setprecision(2) << investmentValue * pow((1 + monthlyInterestRate), i * 12) << endl;
	}
	return futureInvestmentValue;
}


int main() {
	double investmentAmount, interestRate;
	int years = 30;
	
	cout << "Enter the amount invested: ";
	cin >> investmentAmount;

	cout << "Enter the annual interest rate: ";
	cin >> interestRate;

	cout << endl;

	futureInvestmentValue(investmentAmount, (0.01 * interestRate) / 12, years);


	return 0;
}