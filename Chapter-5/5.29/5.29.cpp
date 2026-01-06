#include <iostream>

using namespace std;

int main() {

	int count = 0;
	for (int i = 2001; i <= 2100; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
			cout << i << ", ";
			count++;
			if (count % 10 == 0) 
				cout << endl;
		}
	}

	return 0;
}