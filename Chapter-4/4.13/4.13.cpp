#include <iostream>
#include <cctype>

using namespace std;



int main() {
	char hex_digit;

	cout << "Enter a hex digit: ";
	cin >> hex_digit;

	if (isxdigit(hex_digit) && hex_digit == '0')
		cout << " The binary value is 0000" << endl;
	else if (isxdigit(hex_digit) && hex_digit == '1')
		cout << " The binary value is 0001" << endl;
	else if (isxdigit(hex_digit) && hex_digit == '2')
		cout << " The binary value is 0010" << endl;
	else if (isxdigit(hex_digit) && hex_digit == '3')
		cout << " The binary value is 0011" << endl;
	else if (isxdigit(hex_digit) && hex_digit == '4')
		cout << " The binary value is 0100" << endl;
	else if (isxdigit(hex_digit) && hex_digit == '5')
		cout << " The binary value is 0101" << endl;
	else if (isxdigit(hex_digit) && hex_digit == '6')
		cout << " The binary value is 0110" << endl;
	else if (isxdigit(hex_digit) && hex_digit == '7')
		cout << " The binary value is 0111" << endl;
	else if (isxdigit(hex_digit) && hex_digit == '8')
		cout << " The binary value is 1000" << endl;
	else if (isxdigit(hex_digit) && hex_digit == '9')
		cout << " The binary value is 1001" << endl;
	else if (isxdigit(hex_digit) && (hex_digit == 'a' || hex_digit == 'A'))
		cout << "The binary value is 1010" << endl;
	else if (isxdigit(hex_digit) && (hex_digit == 'b' || hex_digit == 'B'))
		cout << "The binary value is 1011" << endl;
	else if (isxdigit(hex_digit) && (hex_digit == 'c' || hex_digit == 'C'))
		cout << "The binary value is 1100" << endl;
	else if (isxdigit(hex_digit) && (hex_digit == 'd' || hex_digit == 'D'))
		cout << "The binary value is 1101" << endl;
	else if (isxdigit(hex_digit) && (hex_digit == 'e' || hex_digit == 'E'))
		cout << "The binary value is 1110" << endl;
	else if (isxdigit(hex_digit) && (hex_digit == 'f' || hex_digit == 'F'))
		cout << "The binary value is 1111" << endl;
	else
		cout << hex_digit << " is an invalid input" << endl;		


	return 0;
}