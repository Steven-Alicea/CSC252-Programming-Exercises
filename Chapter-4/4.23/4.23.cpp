#include <iostream>
#include <String>
#include <cctype>

using namespace std;



int main() {
	string ssn;

	cout << "Enter a SSN: ";
	cin >> ssn;

	if (isdigit(ssn.at(0)) &&
		isdigit(ssn.at(1)) &&
		isdigit(ssn.at(2)) &&
		isdigit(ssn.at(4)) &&
		isdigit(ssn.at(5)) &&
		isdigit(ssn.at(7)) &&
		isdigit(ssn.at(8)) &&
		isdigit(ssn.at(9)) &&
		isdigit(ssn.at(10)))
		cout << ssn << " is a valid social security number" << endl;
	else
		cout << ssn << " is an invalid social security number" << endl;


	return 0;
}