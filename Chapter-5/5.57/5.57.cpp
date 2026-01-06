#include <iostream>
#include <string>

using namespace std;

int main() {
	string password;
	int count = 0;
	bool is_only_letters_and_digits = true;

	cout << "Enter a password: ";
	cin >> password;

	if (password.length() >= 8) {
		for (int i = 0; i < password.size(); i++) {
			if (int(password[i]) < 48 || int(password[i]) > 57 && int(password[i]) < 65 || int(password[i]) > 90 && int(password[i]) < 97 || int(password[i]) > 122) {
				is_only_letters_and_digits = false;
				break;
			}
			else if (int(password[i]) >= 48 && int(password[i]) <= 57)
				count++;
		}
		if (is_only_letters_and_digits && count >= 2) 
			cout << "Valid password" << endl;
		else
			cout << "Invalid password" << endl;
	}
	else
		cout << "Invalid password" << endl;


	return 0;
}