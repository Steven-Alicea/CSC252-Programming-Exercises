#include <iostream>

using namespace std;



int main() {
	double temperature;

	cout << "Enter a number for temperature: ";
	cin >> temperature;

	if (temperature < 30)
		cout << "too cold" << endl;
	else if (temperature > 100)
		cout << "too hot" << endl;
	else
		cout << "just right" << endl;


	return 0;
}