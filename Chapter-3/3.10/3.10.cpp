#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
	// 3.4 Start
	/*
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
		cout << "You are correct!" << endl;
	else
		cout << "Your answer is wrong. " << number1 << " - " << number2 
		<< " should be " << (number1 - number2) << endl;

	*/
	//3.4 End


	int number1, number2, answer;

	srand(time(0));

	number1 = rand() % 100;
	number2 = rand() % 100;

	cout << "What is " << number1 << " + " << number2 << "? ";
	cin >> answer;

	if (number1 + number2 == answer)
		cout << "You are correct!" << endl;
	else
		cout << "Your answer is wrong. " << number1 << " + " << number2
		<< " should be " << (number1 + number2) << endl;


	return 0;
}