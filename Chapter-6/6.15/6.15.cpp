#include <iostream>

using namespace std;



int numberOfDaysInAYear(int year) {
	int days;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		days = 366;
	else
		days = 365;

	return days;
}


int main() {
	for (int i = 2000; i <= 2010; i++)
		cout << "Number of days in year " << i << ": " << numberOfDaysInAYear(i) << endl;


	return 0;
}