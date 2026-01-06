#include <iostream>

using namespace std;



void displaySortedNumbers(double num1, double num2, double num3) {
	if (num1 > num2)
		swap(num1, num2);
	if (num1 > num3)
		swap(num1, num3);
	if (num2 > num3)
		swap(num2, num3);

	cout << num1 << ", " << num2 << ", " << num3 << endl;
}


int main() {
	int num1, num2, num3;

	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;

	displaySortedNumbers(num1, num2, num3);


	return 0;
}