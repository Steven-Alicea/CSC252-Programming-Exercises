#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int roll_die() {
	int d = rand() % 6 + 1;
	return d;
}

int roll_two_dice() {
	int d1 = rand() % 6 + 1;
	int d2 = rand() % 6 + 1;

	cout << "You rolled " << d1 << " + " << d2 << " = " << d1 + d2 << endl;

	return d1 + d2;
}

//void check_sum(int d1, int d2) {
//	if (d1 + d2 == 2 || d1 + d2 == 3 || d1 + d2 == 12)
//		cout << "You lose" << endl;
//	else if (d1 + d2 == 7 || d1 + d2 == 11)
//		cout << "You win" << endl;
//	else
//		if ()
//}


void play_craps() {
	int sum = roll_two_dice();

	if (sum == 2 || sum == 3 || sum == 12)
		cout << "You lose" << endl;
	else if (sum == 7 || sum == 11)
		cout << "You win" << endl;
	else {
		cout << "point is " << sum << endl;
		int p = sum;
		do {
			p = roll_two_dice();
		} while (p != 7 || p != sum);
		if (p == 7)
			cout << "You loose" << endl;
		else if (p == sum)
			cout << "You win" << endl;
	}

}


int main() {
	srand(time(0));

	play_craps();

	return 0;
}