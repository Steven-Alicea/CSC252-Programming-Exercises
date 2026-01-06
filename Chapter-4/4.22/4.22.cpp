#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



int main() {
	string name;
	double hrs, pay_rate, federal_tax, state_tax;

	cout << "Enter employee's name: ";
	getline(cin, name);

	cout << "Enter number of hours worked in a week: ";
	cin >> hrs;

	cout << "Enter hourly pay rate: ";
	cin >> pay_rate;

	cout << "Enter federal tax withholding rate: ";
	cin >> federal_tax;

	cout << "Enter state tax withholding rate: ";
	cin >> state_tax;

	cout << endl;

	cout << "Employee Name: " << name << endl;
	cout << "Hours Worked: " << hrs << endl;
	cout << fixed << setprecision(2) << "Pay Rate: $" << pay_rate << endl;
	cout << "Gross Pay: $" << hrs * pay_rate << endl;
	cout << "Deductions:" << endl;
	cout << "  Federal Withholding (" << federal_tax * 100 << "%): $" << hrs * pay_rate * federal_tax << endl;
	cout << "  State Withholding(" << state_tax * 100 << "%): $" << hrs * pay_rate * state_tax << endl;
	cout << "  Total Deduction: $" << (hrs * pay_rate * federal_tax) + (hrs * pay_rate * state_tax) << endl;
	cout << "Net Pay: $" << (hrs * pay_rate) - (hrs * pay_rate * federal_tax) - (hrs * pay_rate * state_tax) << endl;


	return 0;
}