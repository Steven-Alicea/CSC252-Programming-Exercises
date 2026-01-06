#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
	// creating points in 1st and 3rd quadrants and inverting the x coordinates
	/*
	const double PI = 2 * acos(0.0);
	double radius;

	cout << "Enter the radius of the bounding circle: ";
	cin >> radius;

	srand(time(0));

	double x = 0, y = radius;

	double angle = (rand() % 90 + 1) * (PI / 180);
	double x1 = radius * cos(angle);
	double y1 = radius * sin(angle);

	angle = (180 + rand() % (270 - 180 + 1)) * (PI / 180);
	double x2 = radius * cos(angle);
	double y2 = radius * sin(angle);

	cout << "(" << x1 << ", " << y1 << ")" << endl;
	cout << "(" << x << ", " << y << ")" << endl;
	cout << "(" << -x1 << ", " << y1 << ")" << endl;
	cout << "(" << x2 << ", " << y2 << ")" << endl;
	cout << "(" << -x2 << ", " << y2 << ")" << endl;
	*/


	// creating points in each quadrant
	const double PI = 2 * acos(0.0);
	double radius;

	cout << "Enter the radius of the bounding circle: ";
	cin >> radius;

	srand(time(0));

	double angle = (rand() % 90 + 1) * (PI / 180); // 0 - 90 degrees
	double x1 = radius * cos(angle);
	double y1 = radius * sin(angle);

	double x2 = 0, y2 = radius;

	angle = (90 + rand() % (180 - 90 + 1)) * (PI / 180); // 90 - 180 degrees
	double x3 = radius * cos(angle);
	double y3 = radius * sin(angle);

	angle = (180 + rand() % (270 - 180 + 1)) * (PI / 180); // 180 - 270 degrees
	double x4 = radius * cos(angle);
	double y4 = radius * sin(angle);

	angle = (270 + rand() % (360 - 270 + 1)) * (PI / 180); // 270 - 360 degrees
	double x5 = radius * cos(angle);
	double y5 = radius * sin(angle);

	cout << "(" << x1 << ", " << y1 << ")" << endl;
	cout << "(" << x2 << ", " << y2 << ")" << endl;
	cout << "(" << x3 << ", " << y3 << ")" << endl;
	cout << "(" << x4 << ", " << y4 << ")" << endl;
	cout << "(" << x5 << ", " << y5 << ")" << endl;

	return 0;
}