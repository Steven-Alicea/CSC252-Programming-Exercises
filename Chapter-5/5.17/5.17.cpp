#include <iostream>

using namespace std;

int main() {

	int ch = '!', counter = 0;
	
	for (ch; ch <= (int)'~'; ch++) {
		cout << (char)ch << " ";			
		counter++;
		if (counter % 10 == 0)
			cout << endl;
	}

	return 0;
}