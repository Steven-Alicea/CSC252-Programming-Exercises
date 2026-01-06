#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double x1 = 0, y1 = 0, x2 = 200, y2 = 0, x3 = 0, y3 = 100;
	double x, y, area, area_PAB, area_PAC, area_PBC;

	cout << "Enter a point's x- and y- coordinates: ";
	cin >> x >> y;

	area = abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2);

	area_PBC = abs((x * (y2 - y3) + x2 * (y3 - y) + x3 * (y - y2)) / 2);

	area_PAC = abs((x1 * (y - y3) + x * (y3 - y1) + x3 * (y1 - y)) / 2);

	area_PAB = abs((x1 * (y2 - y) + x2 * (y - y1) + x * (y1 - y2)) / 2);

	if (area == area_PAB + area_PAC + area_PBC)
		cout << "The point is in the triangle" << endl;
	else
		cout << "The point is not in the triangle" << endl;


	return 0;
}