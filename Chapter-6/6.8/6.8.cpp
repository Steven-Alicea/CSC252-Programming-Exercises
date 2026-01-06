#include <iostream>
#include <iomanip>

using namespace std;



double footToMeter(double foot) {
	return 0.305 * foot;
}

double meterToFoot(double meter) {
	return meter / 0.305;
}


int main() {
	cout << left << setw(8) << "Feet" << setw(9) << "Meters"
		<< setw(4) << "|" << setw(10) << "Meters" << "Feet" << endl;

	double j = 20;
	for (double i = 1; i <= 10; i++) {
		cout << left << fixed << setw(8) << setprecision(1)
			<< i << setw(9) << setprecision(3) << footToMeter(i)
			<< setw(4) << "|" << setw(10) << setprecision(1) << j
			<< setprecision(3) << meterToFoot(j) << endl;
		j += 5;
	}


	return 0;
}