#include <iostream>
#include <string>

using namespace std;



int main() {
	string isbn;
	int checksum;

	cout << "Enter the first 9 digits of an ISBN: ";
	cin >> isbn;
	
	checksum = ((isbn[0] - '0') * 1 + (isbn[1] - '0') * 2 + (isbn[2] - '0') * 3
		+ (isbn[3] - '0') * 4 + (isbn[4] - '0') * 5 + (isbn[5] - '0') * 6
		+ (isbn[6] - '0') * 7 + (isbn[7] - '0') * 8 + (isbn[8] - '0') * 9) % 11;
	
	if (checksum == 10)
		cout << "The ISBN-10 number is " << isbn << 'X' << endl;
	else
		cout << "THe ISBN-10 number is " << isbn << checksum << endl;


	return 0;
}