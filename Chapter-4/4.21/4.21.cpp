#include <iostream>
#include <String>

using namespace std;



int main() {
	string input, major, status;

	cout << "Enter two characters: ";
	cin >> input;

	if (input[0] == 'M')
		major = "Mathamatics";
	else if (input[0] == 'C')
		major = "Computer Science";
	else if (input[0] == 'I')
		major = "Information Technology";
	else
		major = "Invalid major code";

	if (input[1] == '1')
		status = "Freshman";
	else if (input[1] == '2')
		status = "Sophmore";
	else if (input[1] == '3')
		status = "Junior";
	else if (input[1] == '4')
		status = "Senior";
	else
		status = "Invalid status code";

	if (major == "Invalid major code")
		cout << major << endl;
	else if (status == "Invalid status code")
		cout << status << endl;
	else
		cout << major << " " << status << endl;


	return 0;
}