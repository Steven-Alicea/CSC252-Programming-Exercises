#include <iostream>
#include <iomanip>

using namespace std;



double celsiusToFahrenheit(double celsius) {
	return (9.0 / 5)* celsius + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
	return (5.0 / 9) * (fahrenheit - 32);
}


int main() {
	cout << left << setw(12) << "Celsius" << setw(14) << "Fahrenheit"
		<< setw(5) << "|" << setw(15) << "Fahrenheit" << "Celsius" << endl;

	double c = 40, f = 120;
	for (double i = 1; i <= 10; i++) {
		cout << left << fixed << setw(12) << setprecision(1)
			<< c << setw(14) << celsiusToFahrenheit(c)
			<< setw(5) << "|" << setw(15) << f
			<< setprecision(2) << fahrenheitToCelsius(f) << endl;
		c--;
		f -= 10;
	}


	return 0;
}