#include <iostream>

using namespace std;



void printChars(char ch1, char ch2, int numberPerLine) {
	int count = 0;

	if (ch1 > ch2)
		swap(ch1, ch2);
	for (int i = (int)ch1; i <= ch2; i++) {
		cout << (char)i << " ";
		count++;
		if (count % numberPerLine == 0)
			cout << endl;
	}
}


int main() {
	printChars('1', 'Z', 10);


	return 0;
}