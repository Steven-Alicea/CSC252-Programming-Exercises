#include <iostream>
#include <string>

using namespace std;


int main() {
	short int n;
	int bits = 16;
	string binary_string = "";

	cout << "Enter an integer ";
	cin >> n;

	for (int i = bits - 1; i >= 0; i--)
		binary_string += ((n >> i) & 1) ? '1' : '0';

	cout << "The bits are " << binary_string << endl;


	return 0;
}