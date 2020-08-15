#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;

int main() {
	int count;
		
	while(count < 10) {
		cout << "\n\nDice is Rolling";
		int diceValue = 1 + (rand() % 2);
		this_thread:: sleep_for(chrono:: milliseconds(1000) );
		(diceValue == 1) ? cout << "\nHead": cout << "\nTail";
		count++;
	}
}
