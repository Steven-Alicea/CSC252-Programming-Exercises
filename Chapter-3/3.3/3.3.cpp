#include <iostream>

using namespace std;



int main() {
	double a, b, c, d, e, f, x, y;

	cout << "Enter a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;

	if ((a * d) - (b * c) == 0)
		cout << "The equation has no solution" << endl;
	else {
		x = (e * d - b * f) / (a * d - b * c);
		y = (a * f - e * c) / (a * d - b * c);

		cout << "x is " << x << " and y is " << y << endl;
	}


	return 0;
}