#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double tuition = 10000, total;
	for (int i = 1; i <= 10; i++)
		tuition = tuition * 1.05;
	printf("Tuition in 10 years: $%.2f\n", tuition);

	total = tuition;
	for (int i = 1; i <= 3; i++) {
		tuition = tuition * 1.05;
		total += tuition;
	}
	printf("Total cost of 4 years worth of tuition 10 years from now: $%.2f\n", total);

	return 0;
}