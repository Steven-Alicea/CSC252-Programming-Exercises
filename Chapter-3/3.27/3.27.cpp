#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;



int main() {
	// 2.8 Start
	int offset;

	int totalSeconds = time(0);
	int currrentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = totalHours % 24;

	cout << "Current time is " << currentHour << ":" << currentMinute << ":" << currrentSecond << " GMT" << endl;

	cout << "Enter the current time zone offset to GMT: ";
	cin >> offset;

	currentHour = (currentHour + offset) % 24;

	cout << "Current time is " << currentHour << ":" << currentMinute << ":" << currrentSecond << endl;

	// How do we account for a negative offset and keeping a positive hour 
	// (resetting the clock to flip back after 24 hr in opposite direction)


	return 0;
}