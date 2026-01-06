#include <iostream>
#include <string>
#include <cctype>

using namespace std;



int main() {
	int year;
	string month;

	cout << "Enter a year: ";
	cin >> year;

	cout << "Enter a month:";
	cin >> month;

	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	if (isupper(month.at(0))) {
		if (isLeapYear && month == "Feb")
			cout << month << " " << year << " has 29 days" << endl;
		else if (!isLeapYear && month == "Feb")
			cout << month << " " << year << " has 28 days" << endl;
		else if (month == "Jan" || month == "Mar" || month == "May" || month == "Jul" || month == "Aug" || month == "Oct" || month == "Dec")
			cout << month << " " << year << " has 31 days" << endl;
		else if (month == "Apr" || month == "Jun" || month == "Sep" || month == "Nov")
			cout << month << " " << year << " has 30 days" << endl;
		else
			cout << month << " is not a correct month name" << endl;
	}
	else
		cout << month << " is not a correct month name" << endl;


	return 0;
}