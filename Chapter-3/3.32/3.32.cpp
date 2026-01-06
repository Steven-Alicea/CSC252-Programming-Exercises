#include <iostream>

using namespace std;



int main() {
	double x1, y1, x2, y2, m, b;

	cout << "Enter the coordinates for two points: ";
	cin >> x1 >> y1 >> x2 >> y2;

	if (x2 - x1 == 0)
		cout << "The line equation for two points ("
		<< x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is x = a" << endl;
	else {
		m = (y2 - y1) / (x2 - x1); // slope
		b = y1 - (m * x1); // y-intercept
	
		if (m != 1 && b != 0) {
			if (b > 0)
				cout << "The line equation for two points ("
				<< x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is y = "
				<< m << " x + " << b << endl;
			else if (b < 0)
				cout << "The line equation for two points ("
				<< x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is y = "
				<< m << " x " << b << endl;
			else
				cout << "The line equation for two points ("
				<< x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is y = "
				<< m << " x" << endl;
		}
		else
			cout << "The line equation for two points ("
			<< x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is y = x" << endl;
	}


	return 0;
}