#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;



int main() {
	srand(time(0));

	char char1 = rand() % (90 - 65 + 1) + 65;
	char char2 = rand() % (90 - 65 + 1) + 65;
	char char3 = rand() % (90 - 65 + 1) + 65;

	string s;

	s += char1;
	s += char2;
	s += char3;

	string s2 = string(1, char1) + string(1, char2) + string(1, char3);

	cout << s << endl;
	cout << s2 << endl;


	return 0;
}