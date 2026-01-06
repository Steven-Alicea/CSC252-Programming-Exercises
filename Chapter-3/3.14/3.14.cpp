#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
	// 3.7 Start
	/*
	srand(time(0));
	int lottery = rand() % 100;

	cout << "Enter your lottery pick (two digits): ";
	int guess;
	cin >> guess;

	int lotteryDigit1 = lottery / 10;
	int lotteryDigit2 = lottery % 10;

	int guessDigit1 = guess / 10;
	int guessDigit2 = guess % 10;

	cout << "The lottery number is " << lottery << endl;

	if (guess == lottery)
		cout << "Exact match: you win $10,000" << endl;
	else if (guessDigit2 == lotteryDigit1 &&
		guessDigit1 == lotteryDigit2)
		cout << "Match all digits: you win $3,000" << endl;
	else if (guessDigit1 == lotteryDigit1
		|| guessDigit1 == lotteryDigit2
		|| guessDigit2 == lotteryDigit1
		|| guessDigit2 == lotteryDigit2)
		cout << "Match one digit: you win $1,000" << endl;
	else
		cout << "Sorry, no match" << endl;
	*/
	// 3.7 End


	int lottery, guess, ld1, ld2, ld3, gd1, gd2, gd3;

	srand(time(0));
	lottery = 100 + rand() % 900;

	cout << "Enter your lottery pick (three digits): ";
	cin >> guess;

	ld1 = lottery / 100;
	ld2 = lottery % 100 / 10;
	ld3 = lottery % 10;

	gd1 = guess / 100;
	gd2 = guess % 100 / 10;
	gd3 = guess % 10;

	cout << "The lottery number is " << lottery << endl;

	if (guess == lottery)
		cout << "Exact match: you win $10,000" << endl;
	else if (gd1 == ld1 && gd2 == ld3 && gd3 == ld2)
		cout << "Match all digits: you win $3,000" << endl;
	else if (gd1 == ld2 && gd2 == ld1 && gd3 == ld3)
		cout << "Match all digits: you win $3,000" << endl;
	else if (gd1 == ld2 && gd2 == ld3 && gd3 == ld1)
		cout << "Match all digits: you win $3,000" << endl;
	else if (gd1 == ld3 && gd2 == ld2 && gd3 == ld1)
		cout << "Match all digits: you win $3,000" << endl;
	else if (gd1 == ld3 && gd2 == ld1 && gd3 == ld2)
		cout << "Match all digits: you win $3,000" << endl;
	else if (gd1 == ld1 && gd2 != ld2 && gd2 != ld3 && gd3 != ld2 && gd3 != ld3)
		cout << "Match one digit: you win $1,000" << endl;
	else if (gd1 == ld2 && gd2 != ld1 && gd2 != ld3 && gd3 != ld1 && gd3 != ld3)
		cout << "Match one digit: you win $1,000" << endl;
	else if (gd1 == ld3 && gd2 != ld1 && gd2 != ld2 && gd3 != ld1 && gd3 != ld2)
		cout << "Match one digit: you win $1,000" << endl;
	else if (gd2 == ld1 && gd1 != ld2 && gd1 != ld3 && gd3 != ld2 && gd3 != ld3)
		cout << "Match one digit: you win $1,000" << endl;
	else if (gd2 == ld2 && gd1 != ld1 && gd1 != ld3 && gd3 != ld1 && gd3 != ld3)
		cout << "Match one digit: you win $1,000" << endl;
	else if (gd2 == ld3 && gd1 != ld1 && gd1 != ld2 && gd3 != ld1 && gd3 != ld2)
		cout << "Match one digit: you win $1,000" << endl;
	else if (gd3 == ld1 && gd1 != ld2 && gd1 != ld3 && gd2 != ld2 && gd2 != ld3)
		cout << "Match one digit: you win $1,000" << endl;
	else if (gd3 == ld2 && gd1 != ld1 && gd1 != ld3 && gd2 != ld1 && gd2 != ld3)
		cout << "Match one digit: you win $1,000" << endl;
	else if (gd3 == ld3 && gd1 != ld1 && gd1 != ld2 && gd2 != ld1 && gd2 != ld2)
		cout << "Match one digit: you win $1,000" << endl;
	else
		cout << "Sorry, no match" << endl;


	return 0;
}