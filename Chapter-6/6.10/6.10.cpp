#include <iostream>
#include <iomanip>

using namespace std;



double computeComission(double salesAmount) {
	double comission = 0;

	if (salesAmount > 0 && salesAmount <= 5000)
		comission = salesAmount * 0.08;
	else if (salesAmount > 5000 && salesAmount <= 10000)
		comission = computeComission(5000) + (salesAmount - 5000) * 0.10;
	else if (salesAmount > 10000) 
		comission = computeComission(10000) + (salesAmount - 10000) * 0.12;

	return comission;
}


int main() {
	cout << left << setw(17) << "Sales Amount" << "Comission" << endl;

	for (int i = 10000; i <= 100000; i += 5000)
		cout << left << fixed << setw(17) << i << setprecision(1) << computeComission(i) << endl;


	return 0;
}