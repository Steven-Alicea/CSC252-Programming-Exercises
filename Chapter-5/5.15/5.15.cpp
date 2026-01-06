#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n = 1;
	while (pow(n, 3) < 12000)
		n++;
	printf("The largest integer n such that n^3 < 12000 = %d\n", n - 1);

	return 0;
}