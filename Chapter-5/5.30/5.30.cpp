#include <iostream>

using namespace std;

int main() {

	int year, firstDay, days;

	cout << "Enter the year: ";
	cin >> year;

	cout << "Enter the first day of the year (Sun = 0, Mon = 1 etc.): ";
	cin >> firstDay;

	for (int month = 1; month <= 12; month++) {
		cout << endl;
		if (month == 1) {
			cout << "January 1, " << year << " is ";
			days = 31;
		}
		else if (month == 2) {
			cout << "Februrary 1, " << year << " is ";
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				days = 29;
			else
				days = 28;
		}
		else if (month == 3) {
			cout << "March 1, " << year << " is ";
			days = 31;
		}
		else if (month == 4) {
			cout << "April 1, " << year << " is ";
			days = 30;
		}
		else if (month == 5) {
			cout << "May 1, " << year << " is ";
			days = 31;
		}
		else if (month == 6) {
			cout << "June 1, " << year << " is ";
			days = 30;
		}
		else if (month == 7) {
			cout << "July 1, " << year << " is ";
			days = 31;
		}
		else if (month == 8) {
			cout << "August 1, " << year << " is ";
			days = 31;
		}
		else if (month == 9) {
			cout << "September 1, " << year << " is ";
			days = 30;
		}
		else if (month == 10) {
			cout << "October 1, " << year << " is ";
			days = 31;
		}
		else if (month == 11) {
			cout << "November 1, " << year << " is ";

			days = 30;
		}
		else if (month == 12) {
			cout << "December 1, " << year << " is ";
		}
		switch (firstDay) {
		case 0: cout << "Sunday";
			break;
		case 1: cout << "Monday";
			break;
		case 2: cout << "Tuesday";
			break;
		case 3: cout << "Wednesday";
			break;
		case 4: cout << "Thursday";
			break;
		case 5: cout << "Friday";
			break;
		case 6: cout << "Saturday";
			break;
		}
		firstDay = (firstDay + days) % 7;
	}

	/*
			switch (month) {
		case 1:
			cout << "January 1, " << year << " is ";
			days = 31;
			break;
		case 2:
			cout << "Februrary 1, " << year << " is ";
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				days = 29;
			else
				days = 28;
			break;
		case 3:
			cout << "March 1, " << year << " is ";
			days = 31;
			break;
		case 4:
			cout << "April 1, " << year << " is ";
			days = 30;
			break;
		case 5:
			cout << "May 1, " << year << " is ";
			days = 31;
			break;
		case 6:
			cout << "June 1, " << year << " is ";
			days = 30;
			break;
		case 7:
			cout << "July 1, " << year << " is ";
			days = 31;
			break;
		case 8:
			cout << "August 1, " << year << " is ";
			days = 31;
			break;
		case 9:
			cout << "September 1, " << year << " is ";
			days = 30;
			break;
		case 10:
			cout << "October 1, " << year << " is ";
			days = 31;
			break;
		case 11:
			cout << "November 1, " << year << " is ";
			days = 30;
			break;
		case 12:
			cout << "December 1, " << year << " is ";
			days = 31;
			break;
		}
	*/
	return 0;
}