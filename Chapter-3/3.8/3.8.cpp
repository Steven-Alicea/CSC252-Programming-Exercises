#include <iostream>

using namespace std;



int main() {

	// Modify listing 2.12

	// Start 2.12
	//cout << "Enter an amount in double, for example 11.56: ";
	//double amount;
	//cin >> amount;

	//int remainingAmount = static_cast<int>(amount * 100);

	//int numberOfOneDollars = remainingAmount / 100;
	//remainingAmount = remainingAmount % 100;

	//int numberOfQuarters = remainingAmount / 25;
	//remainingAmount = remainingAmount % 25;

	//int numberOfDimes = remainingAmount / 10;
	//remainingAmount = remainingAmount % 10;

	//int nmberOfNickels = remainingAmount / 5;
	//remainingAmount = remainingAmount % 5;

	//int numberOfPennies = remainingAmount;

	//cout << "Your amount " << amount << " consists of " << endl <<
	//	"   " << numberOfOneDollars << " dollars" << endl <<
	//	"   " << numberOfQuarters << " quarters" << endl <<
	//	"   " << numberOfDimes << " dimes" << endl <<
	//	"   " << nmberOfNickels << " nickels" << endl <<
	//	"   " << numberOfPennies << " pennies" << endl;
	// End 2.12

	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remainingAmount = static_cast<int>(amount * 100);

	int numberOfOneDollars = remainingAmount / 100;
	remainingAmount = remainingAmount % 100;

	int numberOfQuarters = remainingAmount / 25;
	remainingAmount = remainingAmount % 25;

	int numberOfDimes = remainingAmount / 10;
	remainingAmount = remainingAmount % 10;

	int nmberOfNickels = remainingAmount / 5;
	remainingAmount = remainingAmount % 5;

	int numberOfPennies = remainingAmount;

	cout << "Your amount " << amount << " consists of" << endl;
		if (numberOfOneDollars > 1)
			cout << numberOfOneDollars << " dollars" << endl;
		else if (numberOfOneDollars == 1)
			cout << numberOfOneDollars << " dollar" << endl;
		if (numberOfQuarters > 1)
			cout << numberOfQuarters << " quaters" << endl;
		else if (numberOfQuarters == 1)
			cout << numberOfQuarters << " quater" << endl;
		if (numberOfDimes > 1)
			cout << numberOfDimes << " dimes" << endl;
		else if (numberOfDimes == 1)
			cout << numberOfDimes << " dime" << endl;
		if (nmberOfNickels > 1)
			cout << nmberOfNickels << " nickels" << endl;
		else if (nmberOfNickels == 1)
			cout << nmberOfNickels << " nickel" << endl;
		if (numberOfPennies > 1)
			cout << numberOfPennies << " pennies" << endl;
		else if (numberOfPennies == 1)
			cout << numberOfPennies << " penny" << endl;

	return 0;
}