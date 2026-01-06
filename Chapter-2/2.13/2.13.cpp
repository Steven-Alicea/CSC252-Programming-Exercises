#include <iostream>

using namespace std;



int main() {
	double amount, interest_rate = 0.05 / 12, value;

	cout << "Enter the monthly saving amount: ";
	cin >> amount;

	value = amount * (1 + interest_rate);
	value = (amount + value) * (1 + interest_rate);
	value = (amount + value) * (1 + interest_rate);
	value = (amount + value) * (1 + interest_rate);
	value = (amount + value) * (1 + interest_rate);
	value = (amount + value) * (1 + interest_rate);

	cout << "After the sixth month, the account value is $" << value << endl;


	return 0;
}