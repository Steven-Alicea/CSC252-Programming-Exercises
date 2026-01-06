#include <iostream>

using namespace std;



int main() {
	int minutes, hours, years, days;

	cout << "Enter the number of minutes: ";
	cin >> minutes;

	hours = minutes / 60;
	days = (hours / 24) % 365;
	years = (hours / 24) / 365;

	cout << minutes << " is approximately " << years << " years and " << days << " days";


	return 0;
}