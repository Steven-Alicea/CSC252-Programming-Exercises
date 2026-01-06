#include <iostream>

using namespace std;



bool leftOfTheLine(double x0, double y0, double x1, double y1, double x2, double y2) {
	return (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0) > 0;
}

bool onTheSameLine(double x0, double y0, double x1, double y1, double x2, double y2) {
	return (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0) == 0;
}

bool onTheLineSegment(double x0, double y0, double x1, double y1, double x2, double y2) {
	int position =  (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0) ;

	if (position == 0 && (x2 >= min(x0, x1) && x2 <= max(x0, x1)) && (y2 >= min(y0, y1) && y2 <= max(y0, y1)))
		return true;
	else
		return false;
}


int main() {
	double x0, y0, x1, y1, x2, y2;

	cout << "Enter three points for p0, p1, and p2: ";
	cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;

	if (leftOfTheLine(x0, y0, x1, y1, x2, y2))
		cout << "(" << x2 << ", " << y2 << ") is on the left side of the line from (" << x0 << ", " << y0 << ") to (" << x1 << ", " << y1 << ")" << endl;
	else if (onTheSameLine(x0, y0, x1, y1, x2, y2)) {
		if (onTheLineSegment(x0, y0, x1, y1, x2, y2))
			cout << "(" << x2 << ", " << y2 << ") is on the line segment from (" << x0 << ", " << y0 << ") to (" << x1 << ", " << y1 << ")" << endl;
		else
			cout << "(" << x2 << ", " << y2 << ") is on the same line from (" << x0 << ", " << y0 << ") to (" << x1 << ", " << y1 << ")" << endl;
	}
	else
		cout << "(" << x2 << ", " << y2 << ") is on the right side of the line from (" << x0 << ", " << y0 << ") to (" << x1 << ", " << y1 << ")" << endl;


	return 0;
}