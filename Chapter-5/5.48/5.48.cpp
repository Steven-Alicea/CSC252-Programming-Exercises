#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	string s;
	int count = 0;

	cout << "Enter a string: ";
	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		if (isupper(int(s[i])))
			count++;
	}

	cout << "The number of uppercase letters is " << count << endl;


	return 0;
}