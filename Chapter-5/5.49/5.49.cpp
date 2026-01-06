#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2, common_prefix;

	cout << "Enter s1: ";
	getline(cin, s1);

	cout << "Enter s2: ";
	getline(cin, s2);

	if (s1.size() >= s2.size()) {
		for (int i = 0; i < s2.size(); i++) {
			if (s1[i] == s2[i])
				common_prefix += s2[i];
		}
	}
	else {
		for (int i = 0; i < s1.size(); i++) {
			if (s1[i] == s2[i])
				common_prefix += s1[i];
		}
	}

	cout << "The common prefix is " << common_prefix << endl;


	return 0;
}