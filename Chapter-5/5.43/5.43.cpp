#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {

	int seconds;

	cout << "Enter the number of seconds: ";
	cin >> seconds;

	while (seconds > 0) {		
		this_thread::sleep_for(chrono::seconds(1));
		seconds--;
		if (seconds == 0)
			cout << "Stopped" << endl;
		else
			cout << seconds << " seconds remaining" << endl;		
	}

	return 0;
}