#include <iostream>
#include <cmath>

using namespace std;



int main() {
	double const RADIUS = 6378.1, PI = 2 * acos(0.0);

	double atlantaLat = 33.7544657, atlantaLong = -84.3898151;
	double orlandoLat = 28.5421109, orlandoLong = -81.3790304;
	double savannahLat = 32.0790074, savannahLong = -81.0921335;
	double charlotteLat = 35.2272086, charlotteLong = -80.8430827;

	atlantaLat *= (PI / 180);
	atlantaLong *= (PI / 180);
	orlandoLat *= (PI / 180);
	orlandoLong *= (PI / 180);
	savannahLat *= (PI / 180);
	savannahLong *= (PI / 180);
	charlotteLat *= (PI / 180);
	charlotteLong *= (PI / 180);

	double atlantaToCharlotte = RADIUS * acos(sin(atlantaLat) * sin(charlotteLat) + cos(atlantaLat) * cos(charlotteLat) * cos(atlantaLong - charlotteLong));
	double atlantaToSavannah = RADIUS * acos(sin(atlantaLat) * sin(savannahLat) + cos(atlantaLat) * cos(savannahLat) * cos(atlantaLong - savannahLong));
	double charlotteToSavannah = RADIUS * acos(sin(charlotteLat) * sin(savannahLat) + cos(charlotteLat) * cos(savannahLat) * cos(charlotteLong - savannahLong));
	double atlanaToOrlando = RADIUS * acos(sin(atlantaLat) * sin(orlandoLat) + cos(atlantaLat) * cos(orlandoLat) * cos(atlantaLong - orlandoLong));
	double orlandoToSavannah = RADIUS * acos(sin(orlandoLat) * sin(savannahLat) + cos(orlandoLat) * cos(savannahLat) * cos(orlandoLong - savannahLong));

	double s = (atlantaToCharlotte + atlantaToSavannah + charlotteToSavannah) / 2;
	double area = sqrt(s * (s - atlantaToCharlotte) * (s - atlantaToSavannah) * (s - charlotteToSavannah));

	s = (atlanaToOrlando + atlantaToSavannah + orlandoToSavannah) / 2;
	area += sqrt(s * (s - atlanaToOrlando) * (s - atlantaToSavannah) * (s - orlandoToSavannah));

	cout << "The area enclosed by the four cities is " << area << endl;


	return 0;
}