#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
	int headCount = 0, tailCount = 0;
	srand((unsigned)time(NULL)); 
	
	while(true){
	int diceValue = 1 + (rand() % 2);
	(diceValue == 1) ? headCount++: tailCount++;
	
		if(headCount == 11){
			cout << "\n Head Count = " << headCount;
			cout << "\n Head Is Winner \n ";
			break;
		}
		if(tailCount == 11){
			cout << "\n Tail Count = " << tailCount; 
			cout << "\n Tail Is winner \n";
			break;
		}
	}
}
