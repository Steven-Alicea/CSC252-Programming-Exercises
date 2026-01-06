#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	int computer, player, win = 0, loss = 0, draw = 0, count = 1;

	do {
		srand(time(0));
		computer = rand() % 3;

		cout << "Game: " << count << endl;

		cout << "(Rock = 0, Paper = 1, Sissor = 2)" << endl
			<< "Enter a number: ";
		cin >> player;

		if (computer == 0 && player == 0) {
			cout << "The computer is rock. You are rock too. It is a draw." << endl;
			draw++;
		}
		else if (computer == 0 && player == 1) {
			cout << "The computer is rock. You are paper. You won!" << endl;
			win++;
		}
		else if (computer == 0 && player == 2) {
			cout << "The computer is rock. You are sissor. You lose." << endl;
			loss++;
		}
		else if (computer == 1 && player == 0) {
			cout << "The computer is paper. You are rock. You lose." << endl;
			loss++;
		}
		else if (computer == 1 && player == 1) {
			cout << "The computer is paper. You are paper. It is a draw." << endl;
			draw++;
		}
		else if (computer == 1 && player == 2) {
			cout << "The computer is paper. You are sissor. You won!" << endl;
			win++;
		}
		else if (computer == 2 && player == 0) {
			cout << "The computer is sissor. You are rock. You won!" << endl;
			win++;
		}
		else if (computer == 2 && player == 1) {
			cout << "The computer is sissor. You are paper. You lose." << endl;
			loss++;
		}
		else if (computer == 2 && player == 2) {
			cout << "The compuer is sissor. You are sissor. It is a draw." << endl;
			draw++;
		}
		count++;
	} while (win <= 2 && loss <= 2);

	cout << "Game Over: Statistics" << endl;

	cout << "Wins: " << win << "\t\t"
		<< "Loss: " << loss << "\t\t"
		<< "Draw: " << draw << endl;
	return 0;
}