#include <iostream>

using namespace std;



int main() {
	double r1_x, r1_y, r1Width, r1_height, r2_x, r2_y, r2_width, r2_height,
		r1_left_bound, r1_right_bound, r1_lower_bound, r1_upper_bound,
		r2_left_bound, r2_right_bound, r2_lower_bound, r2_upper_bound;

	cout << "Enter r1's x-, y- coordinates, width, and height: ";
	cin >> r1_x >> r1_y >> r1Width >> r1_height;

	cout << "Enter r2's x-, y-x coordinates, width, and height: ";
	cin >> r2_x >> r2_y >> r2_width >> r2_height;

	r1_left_bound = r1_x - (r1Width / 2);
	r1_right_bound = r1_x + (r1Width / 2);
	r1_lower_bound = r1_y - (r1_height / 2);
	r1_upper_bound = r1_y + (r1_height / 2);

	r2_left_bound = r2_x - (r2_width / 2);
	r2_right_bound = r2_x + (r2_width / 2);
	r2_lower_bound = r2_y - (r2_height / 2);
	r2_upper_bound = r2_y + (r2_height / 2);

	// r2 does not overlap
	if (r2_left_bound >= r1_right_bound || r2_right_bound <= r1_left_bound
		|| r2_lower_bound >= r1_upper_bound || r2_upper_bound <= r1_lower_bound)
		cout << "r2 does not overlap r1" << endl;

	// r2 inside r1
	else if (r2_left_bound >= r1_left_bound && r2_right_bound <= r1_right_bound
		&& r2_lower_bound >= r1_lower_bound && r2_upper_bound <= r1_upper_bound)
		cout << "r2 is inside r1" << endl;

	// r2 overlaps
	else
		cout << "r2 overlaps r1" << endl;


	return 0;
}