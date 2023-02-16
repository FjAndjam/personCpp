// Compund Interest Calculation

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	double amount;
	double principal = 24.0;
	cout << "Year";
	for(int i=5; i <= 10; i++) {
		cout << "\t " << i << "%  ";
	}
	cout << endl;

	for(int i=1; i <= 76; i++) {
		cout << "-";
	}
	cout << endl;
	cout << fixed << setprecision( 2 );

	for(int year=1; year <= 38; year++) {
		cout << setw(4) << year;
		for(int rate=5; rate <= 10; rate++) {
			amount = principal * pow( 1 + (rate / 100.0), year );
			cout << setw( 12 ) << amount;
		}
		cout << endl;
	}

	return 0;
}
