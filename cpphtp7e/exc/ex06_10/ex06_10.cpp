// Exercise 6.10 Solution: ex06_10.cpp
// Inline function that calculates the volume of a sphere
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

inline double sphereVolume( const double radius ) {
	return 4.0 / 3.0 * PI * pow( radius, 3 );
}

int main(){
	
	double radius;
	cout << "Enter radius: ";
	cin >> radius;

	cout << "Volume is: " << sphereVolume( radius ) << endl;

	return 0;
}
