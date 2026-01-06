#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double x1, y1, x2, y2, distance;
	double const RADIUS = 6378.1, PI = 2 * acos(0.0);

	cout << "Enter point 1 (lattitude and longitude) in degrees: ";
	cin >> x1 >> y1;

	cout << "Enter point 2 (lattitude and longitude) in degrees: ";
	cin >> x2 >> y2;

	x1 *= (PI / 180);
	y1 *= (PI / 180);
	x2 *= (PI / 180);
	y2 *= (PI / 180);

	distance = RADIUS * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));

	cout << "The distance between the two points is " << distance << " km." << endl;


	return 0;
}