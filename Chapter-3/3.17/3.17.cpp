#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double temperature, wind_speed, wind_chill;

	cout << "Enter the temperature in Fahrenheit (> -58 and < 41): ";
	cin >> temperature;

	cout << "Enter the wind speed in miles per hour (>= 2): ";
	cin >> wind_speed;

	if (temperature < -58 || temperature > 41 && wind_speed >= 2)
		cout << "Error: invalid temperature. " << endl;
	else if (temperature >= -58 && temperature <= 41 && wind_speed < 2)
		cout << "Error: invalid wind speed." << endl;
	else
	{
		wind_chill = 35.74 + (0.6215 * temperature) - (35.75 * pow(wind_speed, 0.16))
			+ (0.4275 * temperature * pow(wind_speed, 0.16));
		cout << "The wind chill index is " << wind_chill << endl;
	}


	return 0;
}