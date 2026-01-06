#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



void printMatrix(int n) {
	srand(time(0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << rand() % 2 << " ";
		cout << endl;
	}
}


int main() {
	int n;

	cout << "Enter n: ";
	cin >> n;

	printMatrix(n);


	return 0;
}