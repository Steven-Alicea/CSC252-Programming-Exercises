#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double investment_amount, apr, years, future_investment_value, monthly_interest_rate;

	cout << "Enter investment amount: ";
	cin >> investment_amount;

	cout << "Enter annual interest rate in percentage: ";
	cin >> apr;

	cout << "Enter number of years: ";
	cin >> years;

	monthly_interest_rate = (0.01 * apr) / 12;

	future_investment_value = investment_amount * pow((1 + monthly_interest_rate), (years * 12));

	cout << "Accumulated value is $" << future_investment_value << endl;


	return 0;
}