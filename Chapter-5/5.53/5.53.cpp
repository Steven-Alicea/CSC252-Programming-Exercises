#include <iostream>
#include <string>
# include <cctype>

using namespace std;

int main() {
	string s;
	int vowels_count = 0, constants_count = 0;

	cout << "Enter a string: ";
	getline(cin, s);

	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			s[i] = toupper(s[i]);
			if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
				vowels_count++;
			else
				constants_count++;
		}
	}
	cout << "The number of vowels is " << vowels_count << endl;
	cout << "The number of constants is " << constants_count << endl;


	return 0;
}