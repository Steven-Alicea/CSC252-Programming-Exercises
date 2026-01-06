#include <iostream>
#include <cmath>

using namespace std;



int main() {
	int x1 = 0, y1 = 0, width = 10, height = 5;
	double x2, y2, horizontal_distance, vertical_distance;

	cout << "Enter a point (x, y): ";
	cin >> x2 >> y2;

	horizontal_distance = abs(x2 - x1);
	vertical_distance = abs(y2 - y1);

	if (horizontal_distance <= width / 2.0 && vertical_distance <= height / 2.0)
		cout << "Point (" << x2 << ", " << y2 << ") is in the rectangle." << endl;
	else
		cout << "Point (" << x2 << ", " << y2 << ") is not in the rectangle." << endl;

	
	return 0;
}