#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double length, area, side;
	const double PI = 2 * acos(0.0);

	cout << "Enter the length from the center to a vertex: ";
	cin >> length;

	side = 2 * length * sin(PI / 5);

	area = (5 * pow(side, 2)) / (4 * tan(PI / 5));

	cout << "The area of the pentagon is " << area << endl;


	return 0;
}