#include <iostream>
#include <string>

using namespace std;



int main() {
	string city1, city2, city3;

	cout << "Enter the first city: ";
	getline(cin, city1);

	cout << "Enter the second city: ";
	getline(cin, city2);

	cout << "Enter the third city: ";
	getline(cin, city3);
	
	if (city1 > city2)
		swap(city1, city2);
	if (city2 > city3)
		swap(city2, city3);
	if (city1 > city2)
		swap(city1, city2);
	
	cout << "The three cities in alphabetical order are "
		<< city1 << ", " << city2 << ", " << city3 << endl;


	return 0;
}