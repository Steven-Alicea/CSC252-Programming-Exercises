#include <iostream>

using namespace std;



int main() {
	double x0, y0, x1, y1, x2, y2;

	cout << "Enter three points for p0, p1, and p2: ";
	cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;

	int position = (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);

	if (position > 0)
		cout << "p2 is on the left side of the line" << endl;

	else if (position == 0)
		cout << "p2 is on the same line" << endl;

	else if (position < 0)
		cout << "p2 is on the right side of the line" << endl;


	return 0;
}