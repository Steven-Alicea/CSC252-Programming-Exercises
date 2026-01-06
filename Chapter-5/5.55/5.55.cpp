#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
	int choice, n1, n2, answer;
	
	do {
		cout << "Main Menu" << endl;
		cout << "1: Addition" << endl;
		cout << "2: Subtraction" << endl;
		cout << "3: Multiplication" << endl;
		cout << "4: Division" << endl;
		cout << "5: Exit" << endl;

		cout << "Enter a choice: ";
		cin >> choice;

		srand(time(0));
		n1 = rand() % 10;
		n2 = rand() % 10;

		if (choice == 1) {
			cout << "What is " << n1 << " + " << n2 << " ? ";
			cin >> answer;
			if (answer == n1 + n2)
				cout << "Correct" << endl;
			else
				cout << "Your answer is wrong. The correct answer is " << n1 + n2 << endl;
		}
		else if (choice == 2) {
			while (n1 < n2) {
				n1 = rand() % 10;
				n2 = rand() % 10;
			}
			cout << "What is " << n1 << " - " << n2 << " ? ";
			cin >> answer;
			if (answer == n1 - n2)
				cout << "Correct" << endl;
			else
				cout << "Your answer is wrong. The correct answer is " << n1 - n2 << endl;
		}
		else if (choice == 3) {
			cout << "What is " << n1 << " X " << n2 << " ? ";
			cin >> answer;
			if (answer == n1 * n2)
				cout << "Correct" << endl;
			else
				cout << "Your answer is wrong. The correct answer is " << n1 * n2 << endl;
		}
		else if (choice == 4) {
			while (n2 == 0)
				n2 = rand() % 10;
			cout << "What is " << n1 << " / " << n2 << " ? ";
			cin >> answer;
			if (answer == n1 / n2)
				cout << "Correct" << endl;
			else
				cout << "Your answer is wrong. The correct answer is " << n1 /n2 << endl;
		}
		else if (choice == 5)
			exit(0);
		cout << endl;

	} while (choice != 5);


	return 0;
}