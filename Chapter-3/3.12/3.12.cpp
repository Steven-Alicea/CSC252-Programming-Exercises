#include <iostream>
#include <ctime>

using namespace std;



int main() {
	int coin;
	string guess;

	srand(time(0));

	coin = rand() % 2;

	cout << "Enter ('H', 'h', 'Heads', 'heads') for heads \n"
		<< "Enter ('T', 't', 'Tails', 'tails') for tails \n"
		<< "Take a guess, Heads or tails? ";

	cin >> guess;

	if (guess == "H" ||
		guess == "h" ||
		guess == "Heads" ||
		guess == "heads")
		guess = "Heads";
	else if (guess == "T" ||
		guess == "t" ||
		guess == "Tails" ||
		guess == "tails")
		guess = "Tails";

	if (guess == "Heads" && coin == 0)
		cout << "Correct! The coin is heads." << endl;
	else if (guess == "Heads" && coin == 1)
		cout << "Incorrect! The coin is Tails." << endl;
	else if (guess == "Tails" && coin == 1)
		cout << "Corret! The coin is Tails." << endl;
	else if (guess == "Tails" && coin == 0)
		cout << "Incorrect! The coin is Heads." << endl;


	return 0;
}