/*
Zadacha: Pozitivno ili negativno e chislo
*/

#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter a number: "; cin >> num;
	if(num < 0){
		cout << endl << "Negative";
	}
	else if(num == 0){
		cout << endl << "It is zero";
	}
	else if(num > 0){
		cout << endl << "Positive";
	}
	return 0;
}
