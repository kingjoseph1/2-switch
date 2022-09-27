#include <iostream>
using namespace std;
/* C++  Program to find the maximum between two numbers. Using the switch statement */

int main( ) {
	int num1,num2;
	cout <<"Enter to find out the maximum betweeen two numbers :""\n";
	cin >>num1;
	cin >>num2;

	switch (num1>num2){
		case 1:
		cout << num1 << " is greater";
		break;
	
	case 0:
		switch (num1<num2){
		case 1:
			cout << num2 << " is greater" "\n";
			break;
		}
		break;
	}
	return 0;
}

