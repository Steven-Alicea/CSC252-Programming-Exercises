#include <iostream>

using namespace std;



int main() {
	double edge1, edge2, edge3;

	cout << "Enter 3 edges of a triangle: ";
	cin >> edge1 >> edge2 >> edge3;

	if (edge1 + edge2 > edge3 && edge1 + edge3 > edge2 && edge2 + edge3 > edge1)
		cout << "Perimeter = " << edge1 + edge2 + edge3 << endl;
	else
	cout << "Error: invalid input." << endl;


	return 0;
}