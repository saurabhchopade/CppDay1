#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	while(true) {
		int number, flag = 0, dummyNum;
		cout << "\nEnter a Number = ";
		cin >> number;
		dummyNum = number;
		for(int i = 2; i <= number/2; i++) {
			if(number % i == 0) {
				while(true) {
					flag = 1;
					if(dummyNum % i == 0) {
						dummyNum = dummyNum/i;
						cout << i << " "; 
					}
					else {
						break;
					}
				}
			}
		}
		(flag == 0 ) ? cout << "\nEnter Valid Number\n": cout << " ";
	}
}
