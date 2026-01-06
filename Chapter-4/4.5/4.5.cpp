#include <iostream>
#include <cmath>

using namespace std;



int main() {
	int n;
	double s, area;
	const double PI = 2 * acos(0.0);

	cout << "Enter the number of sides: ";
	cin >> n;

	cout << "Enter the side: ";
	cin >> s;

	area = (n * pow(s, 2)) / (4 * tan(PI / n));

	cout << "The area of the polygon is " << area << endl;


	return 0;
}