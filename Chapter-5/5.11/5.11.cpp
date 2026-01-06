#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	string name, highName1, highName2;
	double score, highScore1 = 0, highScore2 = 0;

	cout << "Enter the number of students: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << "Enter the students name and grade ie. ('Steven' 95): ";
		cin >> name >> score;			
		if (score > highScore1) {
			highScore2 = highScore1;
			highName2 = highName1;
			highName1 = name;
			highScore1 = score;
		}
		else if (score > highScore2 && score < highScore1) {
			highName2 = name;
			highScore2 = score;
		}		

	}
	cout << "Student " << highName1 << " has the highest score of " << highScore1 << endl;
	cout << "Student " << highName2 << " has the second highest score of " << highScore2 << endl;

	return 0;
}