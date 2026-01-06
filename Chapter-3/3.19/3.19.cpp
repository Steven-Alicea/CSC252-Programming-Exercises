#include <iostream>
#include <cmath>

using namespace std;



int main() {
	int x1 = 0, y1 = 0, radius = 10;
	double x2, y2, distance;

	cout << "Enter a point (x, y): ";
	cin >> x2 >> y2;

	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	if (distance <= radius)
		cout << "Point (" << x2 << ", " << y2 << ") is in the circle." << endl;
	else
		cout << "Point (" << x2 << ", " << y2 << ") is not in the circle." << endl;


	return 0;
}