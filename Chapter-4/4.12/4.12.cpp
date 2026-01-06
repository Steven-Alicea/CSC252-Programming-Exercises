#include <iostream>

using namespace std;



int main() {
	char grade;

	cout << "Enter a letter grade: ";
	cin >> grade;

	if (grade == 'A' || grade == 'a')
		cout << "The numeric value for grade " << grade << " is 4" << endl;
	else if (grade == 'B' || grade == 'b')
		cout << "The numeric value for grade " << grade << " is 3" << endl;
	else if (grade == 'C' || grade == 'c')
		cout << "The numeric value for grade " << grade << " is 2" << endl;
	else if (grade == 'D' || grade == 'd')
		cout << "The numeric value for grade " << grade << " is 1" << endl;
	else if (grade == 'F' || grade == 'f')
		cout << "The numeric value for grade " << grade << " is 0" << endl;
	else
		cout << grade << " is an invalid grade" << endl;


	return 0;
}