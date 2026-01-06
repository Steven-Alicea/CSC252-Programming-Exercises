#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main() {
	srand(time(0));
	int width = 100, height = 200;

	int min_width = -(width / 2);
	int max_width = width / 2 ;
	int width_range = max_width - min_width + 1;
	int x = rand() % width_range + min_width;

	int min_height = -(height / 2);
	int max_height = height / 1;
	int height_range = max_height - min_height + 1;
	int y = rand() % height_range + min_height;

	cout << "(" << x << ", " << y << ")" << endl;


	return 0;
}