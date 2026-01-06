#include <iostream>

using namespace std;



int main() {
	int today, days_elapsed;
	string day1, day2;

	cout << "Enter today's day: ";
	cin >> today;

	cout << "Enter the days elapsed since today: ";
	cin >> days_elapsed;

	switch (today) {
	case 0: day1 = "Sunday"; break;
	case 1: day1 = "Monday"; break;
	case 2: day1 = "Tuesday"; break;
	case 3: day1 = "Wednesday"; break;
	case 4: day1 = "Thursday"; break;
	case 5: day1 = "Friday"; break;
	case 6: day1 = "Saturday"; break;
	}

	switch ((today + days_elapsed) % 7) {
	case 0: day2 = "Sunday"; break;
	case 1: day2 = "Monday"; break;
	case 2: day2 = "Tuesday"; break;
	case 3: day2 = "Wednesday"; break;
	case 4: day2 = "Thursday"; break;
	case 5: day2 = "Friday"; break;
	case 6: day2 = "Saturday"; break;
	}

	cout << "Today is " << day1 << " and the future day is " << day2 << endl;


	return 0;
}