#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	const double PI = 2 * acos(0.0);
	double radius;
	int sides;

	cout << "Enter the number of sides: ";
	cin >> sides;

	cout << "Enter the radius of the bounding circle: ";
	cin >> radius;

	double x = radius, y = 0;

	srand(time(0));

	for (int i = 1; i <= sides; i++) {
		double angle = (rand() % 90 + 1) * (PI / 180);
		x = radius * cos(angle);
		y = radius * sin(angle);
	}




	return 0;
}