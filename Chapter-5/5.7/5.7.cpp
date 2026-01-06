#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	const double PI = 4 * atan(1.0);
	cout << left << setw(14) << "Degree" << setw(14) << "Sin" << setw(14) << "Cos" << endl;

	for (int d = 0; d <= 360; d += 10)
		cout << left << fixed << setprecision(4) << setw(14)
		<< d << setw(14) << sin(d * PI / 180) << setw(14) << cos(d * PI / 180) << endl;

	return 0;
}