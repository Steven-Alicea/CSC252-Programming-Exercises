#include <iostream>

using namespace std;



int main() {
	double balance, apr, interest_rate;

	cout << "Enter the balance and interest ratge (e.g., 3 for 3%): ";
	cin >> balance >> apr;

	interest_rate = balance * (apr / 1200);

	cout << "The interest is " << interest_rate << endl;


	return 0;
}