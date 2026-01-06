#include <iostream>
#include <iomanip>

using namespace std;



int main() {
	int year, first_day, days;

	cout << "Enter the year: ";
	cin >> year;

	cout << "Enter the first day of the year (Sun = 0, Mon = 1 etc.): ";
	cin >> first_day;

	for (int month = 1; month <= 12; month++) {
		cout << endl;
		if (month == 1) {
			cout << right << setw(20) << "January " << year << endl;
			days = 31;
		}
		else if (month == 2) {
			cout << right << setw(20) << "February " << year << endl;
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				days = 29;
			else
				days = 28;
		}
		else if (month == 3) {
			cout << right << setw(20) << "March " << year << endl;
			days = 31;
		}
		else if (month == 4) {
			cout << right << setw(20) << "April " << year << endl;
			days = 30;
		}
		else if (month == 5) {
			cout << right << setw(20) << "May " << year << endl;
			days = 31;
		}
		else if (month == 6) {
			cout << right << setw(20) << "June " << year << endl;
			days = 30;
		}
		else if (month == 7) {
			cout << right << setw(20) << "July " << year << endl;
			days = 31;
		}
		else if (month == 8) {
			cout << right << setw(20) << "August " << year << endl;
			days = 31;
		}
		else if (month == 9) {
			cout << right << setw(20) << "September " << year << endl;
			days = 30;
		}
		else if (month == 10) {
			cout << right << setw(20) << "October " << year << endl;
			days = 31;
		}
		else if (month == 11) {
			cout << right << setw(20) << "November " << year << endl;
			days = 30;
		}
		else if (month == 12) {
			cout << right << setw(20) << "December " << year << endl;
			days = 31;
		}
		cout << "-------------------------------------" << endl;
		cout << right << setw(5) << "Sun" << setw(5) << "Mon" << setw(5) << "Tue" 
			<< setw(5) << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5)<< "Sat" << endl;
		
		int count = 0;
		for (int i = 0; i < first_day; i++) {
			cout << right << setw(5) << "";
			count++;
		}
		for (int i = 1; i <= days; i++) {
			cout << right << setw(5) << i;
			count++;
			if (count % 7 == 0)
				cout << endl;
		}
		cout << endl;
		first_day = (first_day + days) % 7;
	}


	return 0;
}