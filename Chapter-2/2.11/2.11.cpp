#include <iostream>

using namespace std;



int main() {
	// 1.11 Start
	int current_population = 312032486, births = 7, deaths = 13, immigrants = 45;
	double seconds_in_year, births_per_year, deaths_per_year, immigrants_per_year;
	
	seconds_in_year = 365 * 24 * 60 * 60;
	births_per_year = seconds_in_year / births;
	deaths_per_year = seconds_in_year / deaths;
	immigrants_per_year = seconds_in_year / immigrants;

	cout << "Current Year population: " << current_population << endl;

	current_population = current_population + births_per_year + immigrants_per_year - deaths_per_year;
	cout << "Year 1 population: " << current_population << endl;

	current_population = current_population + births_per_year + immigrants_per_year - deaths_per_year;
	cout << "Year 2 population: " << current_population << endl;

	current_population = current_population + births_per_year + immigrants_per_year - deaths_per_year;
	cout << "Year 3 population: " << current_population << endl;

	current_population = current_population + births_per_year + immigrants_per_year - deaths_per_year;
	cout << "Year 4 population: " << current_population << endl;

	current_population = current_population + births_per_year + immigrants_per_year - deaths_per_year;
	cout << "Year 5 population: " << current_population << endl;
	// 1.11 End

	// 2.11 Start
	current_population = 312032486;
	int years;

	cout << "Enter the number of years: ";
	cin >> years;

	current_population = current_population + (births_per_year * years + immigrants_per_year * years - deaths_per_year * years);
	cout << "The population in " << years << " years is " << current_population << endl;
	// 2.11 End


	return 0;
}