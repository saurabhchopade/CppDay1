#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;

int main(){
	int count;
	while(count<10){
	int diceValue = 1 + (rand() % 6);
	cout<<"\n \n Random Number = "<<diceValue;	
	count++;
	}
}
