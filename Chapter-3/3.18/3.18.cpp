#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
	/*
	// 2.17 Start
	srand(time(0));
	int number1 = rand() % 10;
	int number2 = rand() % 10;

	if (number1 < number2) {
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}

	cout << "What is " << number1 << " - " << number2 << "? ";
	int answer;
	cin >> answer;

	if (number1 - number2 == answer)
		cout << "You are correct! " << endl;
	else
		cout << "Your answer is wrong. " << number1 << " - " << number2
		<< " should be " << (number1 - number2) << endl;
	*/
	// 2.17 End


	int n1, n2, n3, answer;

	srand(time(0));
	n1 = rand() % 101;
	n2 = rand() % 101;
	n3 = rand() % 101;

	cout << "What is " << n1 << " + " << n2 << " + " << n3 << "? ";
	cin >> answer;

	if (n1 + n2 + n3 == answer)
		cout << "You are correct! " << endl;
	else
		cout << "Your anwer is wrong. " << n1 << " + " << n2 << " + " << n3
		<< " should be " << (n1 + n2 + n3) << endl;


	return 0;
}
