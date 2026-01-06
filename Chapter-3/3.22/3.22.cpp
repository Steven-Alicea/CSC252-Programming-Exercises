#include <iostream>

using namespace std;



int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4, x, y;
	double a, b, c, d, e, f;

	cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	a = y1 - y2;
	b = -(x1 - x2);
	c = y3 - y4;
	d = -(x3 - x4);
	e = (y1 - y2) * x1 - (x1 - x2) * y1;
	f = (y3 - y4) * x3 - (x3 - x4) * y3;

	if ((a * d) - (b * c) == 0) {
		cout << "The two lines are parallel" << endl;
	}
	else {
		x = (e * d - b * f) / (a * d - b * c);
		y = (a * f - e * c) / (a * d - b * c);

		cout << "x is " << x << " and y is " << y << endl;
	}


	return 0;
}