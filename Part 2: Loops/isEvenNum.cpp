#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "Enter a number: "; cin >> number;
	if(number % 2 == 0){
		cout << endl << "The number is Even";
	}
	else{
		cout << endl << "The number is Not Even";
	}
	return 0;
}
