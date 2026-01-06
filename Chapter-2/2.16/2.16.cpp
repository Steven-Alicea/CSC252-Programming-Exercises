#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double side, area;

	cout << "Enter the side: ";
	cin >> side;

	area = ((3 * sqrt(3)) / 2) * pow(side, 2);

	cout << "The area of the hexagon is " << area << endl;


	return 0;
}