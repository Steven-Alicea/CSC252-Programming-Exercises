#include <iostream>

using namespace std;



int main() {
	int month, year, days;
	string m;

	cout << "Enter the month: ";
	cin >> month;

	cout << "Enter the year:";
	cin >> year;

	switch (month) {
	case 1: m = "January"; break;
	case 2: m = "February"; break;
	case 3: m = "March"; break;
	case 4: m = "April"; break;
	case 5: m = "May"; break;
	case 6: m = "June"; break;
	case 7: m = "July"; break;
	case 8: m = "August"; break;
	case 9: m = "September"; break;
	case 10: m = "October"; break;
	case 11: m = "November"; break;
	case 12: m = "December"; break;
	}

	if ((month == 2 && year % 4 == 0 && year % 100 != 0) || (month == 2 && year % 400 == 0))
		days = 29;
	else if (month == 2)
		days = 28;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		days = 30;
	else
		days = 31;

	cout << m << " " << year << " has " << days << " days" << endl;


	return 0;
}