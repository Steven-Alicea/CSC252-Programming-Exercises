#include <iostream>
#include <iomanip>

using namespace std;



int main() {
	double exchange_rate, dollars, yuan;
	int conversion;

	cout << "Enter the exchange rate from dollars to RMB: ";
	cin >> exchange_rate;

	cout << "Enter 0 to convert dollars to RBM and 1 for vice versa: ";
	cin >> conversion;

	if (conversion == 0) {
		cout << "Enter the dollar amount: ";
		cin >> dollars;
		cout << "$" << dollars << " is " << dollars * exchange_rate << " yuan" << endl;
	}
	else if (conversion == 1) {
		cout << "Enter the RMB amount: ";
		cin >> yuan;
		cout << fixed << setprecision(1) << yuan << " yuan is $" << setprecision(2) << yuan / exchange_rate << endl;
	}
	else
		cout << "Incorrect input" << endl;


	return 0;
}