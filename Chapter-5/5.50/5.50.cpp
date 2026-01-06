#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, reversed_string;

	cout << "Enter a string: ";
	getline(cin, s);

	for (int i = s.size() - 1; i >= 0; i--) {
		reversed_string += s[i];
	}

	cout << "The reversed string is " << reversed_string << endl;

	return 0;
}