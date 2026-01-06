#include <iostream>

using namespace std;



int main() {
	int number;

	cout << "Enter an integer: ";
	cin >> number;

	if (number % 5 == 0 && number % 6 == 0)
		cout << "Is " << number << " divisible by 5 and 6? true" << endl;
	else
		cout << "Is " << number << " divisible by 5 and 6? false" << endl;

	if (number % 5 == 0 || number % 6 == 0)
		cout << "Is " << number << " divisible by 5 or 6? true" << endl;
	else
		cout << "Is " << number << " divisible by 5 or 6? false" << endl;

	if ((number % 5 == 0 || number % 6 == 0) && (number % 5 == 0 && number % 6 == 0))
		cout << "Is " << number << " divisible by 5 or 6, but not both? false" << endl;
	else
		cout << "Is " << number << " divisible by 5 or 6, but not both? true" << endl;


	return 0;
}