#include <iostream>

using namespace std;



int main() {
	int ASCII;

	cout << "Enter an ASCII code: ";
	cin >> ASCII;

	if (ASCII >= 0 && ASCII <= 127)
		cout << "The character is " << char(ASCII) << endl;
	else
		cout << "Error: invalid input" << endl;


	return 0;
}