#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int main(){
	
	enum Status {CONTINUE, WIN, LOST};
	Status gameStatus;
	srand(time(0));
	
	int sumOfDice = rollDice();
	int myPoint;
	
	switch( sumOfDice ) {
		case 7:
		case 11:
			gameStatus = WIN;
			cout << "Player win." << endl;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			cout << "Craps, player lost!" << endl;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sumOfDice;
			cout << "Point is " << myPoint << endl;
			break;
	}
	
	while ( gameStatus == CONTINUE ) {
		sumOfDice = rollDice();
		if( myPoint == sumOfDice ) {
			cout << "Player win!" << endl;
			gameStatus = WIN;
		} else {
			if( sumOfDice == 7 ) {
				cout << "Player lost!" << endl;
				gameStatus = LOST;
			}
		}
	}

	return 0;
}

int rollDice() {
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;
	cout << "Player rolled: " << die1 << " + " << die2 << " = " << sum << endl;

	return sum;
}
