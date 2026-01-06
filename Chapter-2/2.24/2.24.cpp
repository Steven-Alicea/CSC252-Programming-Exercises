#include <iostream>

using namespace std;



int main() {
	// 2.12 Start
	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remaining_amount = static_cast<int>(amount * 100);

	int number_of_one_dollars = remaining_amount / 100;
	remaining_amount = remaining_amount % 100;

	int number_of_quarters = remaining_amount / 25;
	remaining_amount = remaining_amount % 25;

	int number_of_dimes = remaining_amount / 10;
	remaining_amount = remaining_amount % 10;

	int number_of_nickles = remaining_amount / 5;
	remaining_amount = remaining_amount % 5;

	int number_of_pennies = remaining_amount;

	cout << "Your amount " << amount << " consists of " << endl
		<< number_of_one_dollars << " dollars" << endl
		<< number_of_quarters << " quarters" << endl
		<< number_of_dimes << " dimes" << endl
		<< number_of_nickles << " nickles" << endl
		<< number_of_pennies << " pennies" << endl;
	// 2.12 End

	// not finished!


	return 0;
}