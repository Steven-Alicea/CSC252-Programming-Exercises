#include <iostream>
#include <iomanip>

using namespace std;



double sumSeries(int n) {
	double sum = 0;

	for (int i = 1; i <= n; i++)
		sum += i / (i + 1.0);

	return sum;
}


int main() {
	cout << left << setw(12) << "i" << "m(i)" << endl;

	for (int i = 1; i <= 20; i++)
		cout << left << fixed << setw(12) << i << setprecision(4) << sumSeries(i) << endl;


	return 0;
}