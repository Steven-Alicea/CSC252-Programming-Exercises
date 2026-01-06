#include <iostream>
#include <iomanip>

using namespace std;



double computeTax(int status, double taxableIncome) {
	double tax = 0;

	if (status == 0) {
		if (taxableIncome <= 8350)
			tax = taxableIncome * 0.10;
		else if (taxableIncome <= 33950)
			tax = computeTax(status, 8350) + (taxableIncome - 8350) * 0.15;
		else if (taxableIncome <= 82250)
			tax = computeTax(status, 33950) + (taxableIncome - 33950) * 0.25;
		else if (taxableIncome <= 171550)
			tax = computeTax(status, 82250) + (taxableIncome - 82250) * 0.28;
		else if (taxableIncome <= 372950)
			tax = computeTax(status, 171550) + (taxableIncome - 171550) * 0.33;
		else
			tax = computeTax(status, 372950) + (taxableIncome - 372950) * 0.35;
	}
	else if (status == 1) {
		if (taxableIncome <= 16700)
			tax = taxableIncome * 0.10;
		else if (taxableIncome <= 67900)
			tax = computeTax(status, 16700) + (taxableIncome - 16700) * 0.15;
		else if (taxableIncome <= 137050)
			tax = computeTax(status, 67900) + (taxableIncome - 67900) * 0.25;
		else if (taxableIncome <= 208850)
			tax = computeTax(status, 137050) + (taxableIncome - 137050) * 0.28;
		else if (taxableIncome <= 372950)
			tax = computeTax(status, 208850) + (taxableIncome - 208850) * 0.33;
		else
			tax = computeTax(status, 372950) + (taxableIncome - 372950) * 0.35;
	}
	else if (status == 2) {
		if (taxableIncome <= 8350)
			tax = taxableIncome * 0.10;
		else if (taxableIncome <= 33950)
			tax = computeTax(status, 8350) + (taxableIncome - 8350) * 0.15;
		else if (taxableIncome <= 68525)
			tax = computeTax(status, 33950) + (taxableIncome - 33950) * 0.25;
		else if (taxableIncome <= 104425)
			tax = computeTax(status, 68525) + (taxableIncome - 68525) * 0.28;
		else if (taxableIncome <= 186475)
			tax = computeTax(status, 104425) + (taxableIncome - 104425) * 0.33;
		else
			tax = computeTax(status, 186475) + (taxableIncome - 186475) * 0.35;
	}
	else if (status == 3) {
		if (taxableIncome <= 11950)
			tax = taxableIncome * 0.10;
		else if (taxableIncome <= 45500)
			tax = computeTax(status, 11950) + (taxableIncome - 11950) * 0.15;
		else if (taxableIncome <= 117450)
			tax = computeTax(status, 45500) + (taxableIncome - 45500) * 0.25;
		else if (taxableIncome <= 190200)
			tax = computeTax(status, 117450) + (taxableIncome - 117450) * 0.28;
		else if (taxableIncome <= 372950)
			tax = computeTax(status, 190200) + (taxableIncome - 190200) * 0.33;
		else
			tax = computeTax(status, 372950) + (taxableIncome - 372950) * 0.35;
	}
	return tax;
}


int main() {
	cout << left
		<< setw(10) << "Taxable " << setw(10) << " "
		<< setw(24) << "Married Joint or"
		<< setw(12) << "Married" << "Head of" << endl;
	cout << left
		<< setw(10) << "Income" << setw(10) << "Single"
		<< setw(24) << "Qualifying Widow(er)"
		<< setw(12) << "Separate" << "a House" << endl;

	for (int taxableIncome = 50000; taxableIncome <= 60000; taxableIncome += 50)
		cout << left << fixed << setprecision(0)
		<< setw(10) << taxableIncome << setw(10) << computeTax(0, taxableIncome)
		<< setw(24) << computeTax(1, taxableIncome)
		<< setw(12) << computeTax(2, taxableIncome) << computeTax(3, taxableIncome) << endl;


	return 0;
}