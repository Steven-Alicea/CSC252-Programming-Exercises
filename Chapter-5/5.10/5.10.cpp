#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	string name, highName;
	double score, highScore = 0;

	cout << "Enter the number of students: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << "Enter the students name and grade ie. ('Steven' 95): ";
		cin >> name >> score;
		if (score > highScore) {
			highName = name;
			highScore = score;
		}
	}
	cout << "Student " << highName << " has the highest score of " << highScore << endl;

	return 0;
}