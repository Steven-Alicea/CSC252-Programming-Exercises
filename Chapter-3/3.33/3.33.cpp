#include <iostream>

using namespace std;



int main() {
	// h = day of the week
	// q = day of the month
	// m = month (January: 1 -> 13, Feburaury: 2 -> 14 | year -> previous year)
	// j = century
	// k = year of the century

	int h, q, m, j, k;

	cout << "Enter year: (e.g., 2012): ";
	cin >> k;

	cout << "Enter month: 1-12: ";
	cin >> m;

	cout << "Enter day of the month: 1-31: ";
	cin >> q;

	if (m == 1) {
		m = 13;
		k -= 1;
	}
	else if (m == 2) {
		m = 14;
		k -= 1;
	}

	j = k / 100;
	k = k % 100;
	h = (q + ((26 * (m + 1)) / 10) + k + (k / 4) + (j / 4) + (5 * j)) % 7;

	switch (h) {
	case 0:
		cout << "Day of the week is Saturday" << endl;
		break;
	case 1:
		cout << "Day of the week is Sunday" << endl;
		break;
	case 2:
		cout << "Day of the week is Monday" << endl;
		break;
	case 3:
		cout << "Day of the week is Tuesday" << endl;
		break;
	case 4:
		cout << "Day of the week is Wednesday" << endl;
		break;
	case 5:
		cout << "Day of the week is Thursday" << endl;
		break;
	case 6:
		cout << "Day of the week is Friday" << endl;
		break;
	default:
		std::cout << "Invalid day" << endl;
	}


	return 0;
}