#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	cout << "Enter a string: ";
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		if (i % 2 != 0)
			cout << s[i];
	}


	return 0;
}