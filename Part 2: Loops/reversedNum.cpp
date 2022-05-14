/*
Zadacha: Da izveda obratno chislo na dadeno
*/

#include <iostream>

using namespace std;

int main() {
	int num, reversed;
	cout << "Enter a number: "; cin >> num;
	cout << endl;
	int tmpNum = num;
	while(tmpNum>0){
		int rem = tmpNum%10;
		reversed = reversed * 10 + rem;
		tmpNum/=10;
	}
	cout << "Reversed number is " << reversed;
	return 0;
}
