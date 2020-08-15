#include <iostream>
using namespace std;

int main(){
	while(true){
		int number;
		cout << "\n\nEnter Number = ";
		cin >> number;
		cout << "You Entered = ";
		switch(number){
			case 0:
            cout << "Zero";
            break; 
			case 1:
				cout << "One";
				break;
			case 2:
				cout << "Two";
				break;
			case 3:
				cout << "Three";
				break;		
			case 4:
            cout << "Four";
            break; 
       	case 5:
            cout << "Five";
            break; 
      	case 6:
            cout << "Siz";
            break; 
       	case 7:
            cout << "Seven";
            break; 
        	case 8:
            cout << "Eight";
            break; 
    		case 9:
            cout << "Nine";
            break;
       	default:
       		cout << "Enter single digit Number";
       		break;		                                 		
		}
	}
}
