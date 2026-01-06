#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double x1, y1, r1, x2, y2, r2, distance;

	cout << "Enter circle 1's center x-, y- coordinates, and radius: ";
	cin >> x1 >> y1 >> r1;

	cout << "Enter circle 2's center x-, y- coordinates, and radius: ";
	cin >> x2 >> y2 >> r2;

	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	if (distance <= abs(r1 - r2))
		cout << "Circle 2 is inside circle 1" << endl;
	else if (distance <= r1 + r2)
		cout << "Circle 2 overlaps circle 1" << endl;
	else
		cout << "Circle 2 does not overlap circle 1" << endl;


	return 0;
}