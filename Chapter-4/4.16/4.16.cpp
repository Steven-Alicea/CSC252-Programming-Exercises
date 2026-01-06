#include <iostream>
#include <string>

using namespace std;



int main() {
	string s;

	cout << "Enter a string: ";
	cin >> s;

	cout << "The length of the string is: " << s.length() << endl;
	cout << "The first character is: " << s[0] << endl;


	return 0;
}