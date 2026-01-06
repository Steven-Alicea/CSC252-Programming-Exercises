#include <iostream>
#include <fstream>

using namespace std;


int main() {
	char letter;
	int count = 0;

	ifstream input("countletters.txt");
	
	while (input.get(letter)) {
		if ((int(letter) >= 65 && int(letter) <= 90) || (int(letter) >= 97 && int(letter) <= 122)) {
			count++;
		}
	}
	cout << "The number of letters in countletters.txt is " << count << endl;
	input.close();


	return 0;
}