#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
	int computer, player;

	srand(time(0));
	computer = rand() % 3;

	cout << "(Rock = 0, Paper = 1, Sissor = 2)" << endl
		<< "Enter a number: ";
	cin >> player;

	if (computer == 0 && player == 0)
		cout << "The computer is rock. You are rock too. It is a draw." << endl;
	else if (computer == 0 && player == 1)
		cout << "The computer is rock. You are paper. You won!" << endl;
	else if (computer == 0 && player == 2)
		cout << "The computer is rock. You are sissor. You lose." << endl;
	else if (computer == 1 && player == 0)
		cout << "The computer is paper. You are rock. You lose." << endl;
	else if (computer == 1 && player == 1)
		cout << "The computer is paper. You are paper. It is a draw." << endl;
	else if (computer == 1 && player == 2)
		cout << "The computer is paper. You are sissor. You won!" << endl;
	else if (computer == 2 && player == 0)
		cout << "The computer is sissor. You are rock. You won!" << endl;
	else if (computer == 2 && player == 1)
		cout << "The computer is sissor. You are paper. You lose." << endl;
	else if (computer == 2 && player == 2)
		cout << "The compuer is sissor. You are sissor. It is a draw." << endl;
	else
		cout << "Error: invalid choice." << endl;


	return 0;
}