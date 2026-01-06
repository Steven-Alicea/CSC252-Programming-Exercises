#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	cout << left << setw(14) << "Number" << "SquareRoot" << endl;
	for (int i = 0; i <= 20; i += 2)
		cout << left << fixed << setw(14) << i << setprecision(4) << sqrt(i) << endl;

	return 0;
}