// Fig 6.9: fig06_09.cpp
// Roll a six-sided die 6,000,000 times
#include <iostream>
#include <iomanip>
#include <cstdlib> // contain function prototype for rand
using namespace std;

int main() {

	int frequency1 = 0; // count of 1s rolled
	int frequency2 = 0; 
	int frequency3 = 0;
	int frequency4 = 0;
	int frequency5 = 0;
	int frequency6 = 0;

	int face; // stores most recently rolled value

	// summarize results of 6,000,000 rolls of a die
	for( int roll = 1; roll <= 6000000; roll++) {
		face = 1 + rand() % 6; // random number from 1 to 6
		
		// determine roll value 1-6 and increment approriate counter
		switch(face) {
			case 1:
				++frequency1; // increment the 1s counter
				break;
			case 2:
				++frequency2;
				break;
			case 3:
				++frequency3;
				break;
			case 4:
				++frequency4;
				break;
			case 5:
				++frequency5;
				break;
			case 6:
				++frequency6;
				break;
			default:
				cout << "Program should never get here." << endl;
		}
	}

	cout << "Face" << setw( 13 ) << "Frequency" << endl; // output headers
	cout << "   1" << setw( 13 ) << frequency1
		<< "\n   2" << setw( 13 ) << frequency2
		<< "\n   3" << setw( 13 ) << frequency3
		<< "\n   4" << setw( 13 ) << frequency4
		<< "\n   5" << setw( 13 ) << frequency5
		<< "\n   6" << setw( 13 ) << frequency6 << endl;

	return 0;
}
