#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n = 1;
	while (pow(n, 2) <= 12000)
		n++;
	printf("The smallest integer n such that n^2 > 12000 = %d\n", n);

	return 0;
}