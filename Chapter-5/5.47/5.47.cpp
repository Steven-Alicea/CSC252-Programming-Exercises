#include <iostream>
#include <cmath>

using namespace std;


double getMean(double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10) {
	return (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;
}

double getStdDeviation(double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10) {
	double sum_n_squared = (pow(n1, 2) + pow(n2, 2) + pow(n3, 2) + pow(n4, 2) + pow(n5, 2) + pow(n6, 2) + pow(n7, 2) + pow(n8, 2) + pow(n9, 2) + pow(n10, 2));
	double sum_squared = pow(n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10, 2);

	return sqrt((sum_n_squared -  (sum_squared / 10)) / (10 - 1));
}

int main() {
	double n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

	cout << "Enter ten numbers: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;

	cout << "The mean is " << getMean(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10) << endl;
	cout << "The standard deviation is " << getStdDeviation(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10) << endl;

	return 0;
}