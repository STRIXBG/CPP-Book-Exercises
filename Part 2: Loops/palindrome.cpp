/*
Zadacha: Da proverq dali chislo e palindrom ili ne
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
	if(num == reversed) cout << endl << "The number is palindrome";
	else cout << endl << "The number is not palindrome";
	return 0;
}
