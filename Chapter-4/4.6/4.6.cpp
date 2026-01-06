#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
	const int RADIUS = 40;
	const double PI = 2 * acos(0.0);

	srand(time(0));

	double angleA = (rand() % 361) * (PI / 180);
	double x1 = RADIUS * cos(angleA);
	double y1 = RADIUS * sin(angleA);

	double angleB = (rand() % 361) * (PI / 180);
	double x2 = RADIUS * cos(angleB);
	double y2 = RADIUS * sin(angleB);

	double angleC = (rand() % 361) * (PI / 180);
	double x3 = RADIUS * cos(angleC);
	double y3 = RADIUS * sin(angleC);

	double sideC = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // side a to b: opposite angle c
	double sideA = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)); // side b to c: opposite angle a
	double sideB = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)); // side a to c: opposite angle b

	angleC = acos((pow(sideA, 2) + pow(sideB, 2) - pow(sideC, 2)) / (2 * sideA * sideB)) * 180 / PI;
	angleA = acos((pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2)) / (2 * sideB * sideC)) * 180 / PI;
	angleB = acos((pow(sideC, 2) + pow(sideA, 2) - pow(sideB, 2)) / (2 * sideC * sideA)) * 180 / PI;

	cout << "Angle A is " << angleA << " degrees." << endl;
	cout << "Angle B is " << angleB << " degrees." << endl;
	cout << "Angle C is " << angleC << " degrees." << endl;

	cout << "The sum of all angles is " << angleA + angleB + angleC << " degrees." << endl;


	return 0;
}