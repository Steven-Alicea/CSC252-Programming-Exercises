#include <iostream>
#include <ctime>

using namespace std;



int main() {
	int offset;
	int total_seconds = time(0);
	int currrent_second = total_seconds % 60;
	int total_minutes = total_seconds / 60;
	int current_minute = total_minutes % 60;
	int total_hours = total_minutes / 60;
	int current_hour = total_hours % 24;

	cout << "Current time is " << current_hour << ":" << current_minute << ":" << currrent_second << " GMT" << endl;

	cout << "Enter the current time zone offset to GMT: ";
	cin >> offset;

	current_hour = (current_hour + offset) % 24;

	cout << "Current time is " << current_hour << ":" << current_minute << ":" << currrent_second << endl;

	// How do we account for a negative offset and keeping a positive hour 
	// (resetting the clock to flip back after 24 hr in opposite direction)


	return 0;
}