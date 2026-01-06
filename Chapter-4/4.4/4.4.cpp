#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double s, area;
	const double PI = 2 * acos(0.0);

	cout << "Enter the side: ";
	cin >> s;

	area = (6 * pow(s, 2)) / (4 * tan(PI / 6));

	cout << "The area of the hexagon is " << area << endl;


	return 0;
}