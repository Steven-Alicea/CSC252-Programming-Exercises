#include <iostream>

using namespace std;



int main() {
	double subtotal, gratuity_rate, gratuity, total;

	cout << "Enter the subtotal and gratuity rate: ";
	cin >> subtotal >> gratuity_rate;

	gratuity = subtotal * (gratuity_rate * 0.01);
	total = subtotal + gratuity;

	cout << "The gratuity is $" << gratuity << " and the total is $" << total << endl;


	return 0;
}