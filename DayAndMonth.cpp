#include <ctime>
#include <iostream>
using namespace std;

int main() {
	while(true){
		int month,day;
		cout << "\nEnter Month = ";
		cin >> month;
		cout << "\nEnter Day = ";
		cin >> day;
		(day >= 1 && day <= 31) ? cout << " " : cout << "Enter Valid Day";
		(month >= 1 && month <= 12) ? cout << " " : cout << "Enter Valid Month";
		if(month >= 3 && month <= 6)
		{
			if(month == 3){
				(day >= 20) ? cout << "True\n" : cout << "False\n";
			}

			else if(month == 6){
         	(day <= 20) ? cout << "True\n" : cout << "False\n";
      	}
      	else{
      		cout << "True\n";
      	}
		}
		else{
			cout << "\nFalse\n";
		}
	}
}
