#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	srand(time(0));

	cout << "Enter your lottery pick (two digits): ";
	int guess;
	cin >> guess;

	int lotteryDigit1 = rand() % 9 + 1;
	int lotteryDigit2;

	do {
		lotteryDigit2 = rand() % 9 + 1;
	} while (lotteryDigit2 == lotteryDigit1);

	int lottery = lotteryDigit1 * 10 + lotteryDigit2;

	int guessDigit1 = guess / 10;
	int guessDigit2 = guess % 10;

	cout << "The lottery number is " << lottery << endl;

	if (guess == lottery)
		cout << "Exact match: you win $10,000" << endl;
	else if (guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit2)
		cout << "Match all digits: you min $3,000" << endl;
	else if (guessDigit1 == lotteryDigit1
		|| guessDigit1 == lotteryDigit2
		|| guessDigit2 == lotteryDigit1
		|| guessDigit2 == lotteryDigit2)
		cout << "Match one digit: you win $1,000" << endl;
	else
		cout << "Sorry, no match" << endl;

	return 0;
}