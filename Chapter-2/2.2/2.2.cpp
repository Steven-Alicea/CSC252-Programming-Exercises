#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double radius, length, area, volume;
	const int PI = 2 * acos(0.0);

	cout << "Enter the radius and length of a cylinder: ";
	cin >> radius >> length;

	area = pow(radius, 2) * PI;
	volume = area * length;

	cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl;


	return 0;
}