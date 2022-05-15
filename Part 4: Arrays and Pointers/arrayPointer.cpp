/*
Zadacha: Dostup do masiv s ukazatel
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int data[5];
	cout << "Enter 5 items: ";
	for(int i=0; i<5; i++){
		cin >> data[i];
	}
	cout << "Result: ";
	for(int i=0; i<5; i++){
		cout << endl << *(data + i);
	}
	return 0;
}
