#include <iostream>

using namespace std;



int main() {
	double feet, meters;

	cout << "Enter a value for feet: ";
	cin >> feet;

	meters = feet * 0.305;

	cout << feet << " feet is " << meters << " meters" << endl;


	return 0;
}