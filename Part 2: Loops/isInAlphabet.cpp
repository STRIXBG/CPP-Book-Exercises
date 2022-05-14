/*
Zadacha: Dali simvol e chast ot azbukata ili ne
*/

#include <iostream>

using namespace std;

int main() {
	char ch;
	cout << "Enter a char: "; cin >> ch;
	if(ch >= 'a' && ch <= 'z') cout << "This symbol is in the alphabet";
	else cout << "This symbol is not in the alphabet";
	return 0;
}
