#include <iostream>

using namespace std;



int main() {
	int a, b, c, temp;

	cout << "Enter three integers: ";
	cin >> a >> b >> c;

	if (a <= c && c <= b)
		cout << b << c << b << endl;
	else if (b <= a && a <= c)
		cout << b << a << c << endl;
	else if (b <= c && c <= a)
		cout << b << c << a << endl;
	else if (c <= a && a <= b)
		cout << c << a << b << endl;
	else if (c <= b && b <= a)
		cout << c << b << a << endl;
	else
		cout << a << ", " << b << ", " << c << endl;


	return 0;
}