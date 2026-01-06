#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int coin;

int main() {

	srand(time(0));

	for (int i = 1; i <= 1000000; i++)
		coin = rand() % 2;

	if (coin == 0)
		cout << "Heads" << endl;
	else
		cout << "Tails" << endl;
	return 0;
}