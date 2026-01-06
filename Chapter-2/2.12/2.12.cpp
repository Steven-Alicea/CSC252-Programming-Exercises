#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double speed, acceleration, length;

	cout << "Enter speed and acceleration: ";
	cin >> speed >> acceleration;

	length = pow(speed, 2) / (2 * acceleration);

	cout << "The minimum runway length for this airplane is " << length << endl;


	return 0;
}