/*
Zadacha: Suedinqvane na string bez funkciq
*/

#include <iostream>

using namespace std;

int main() {
	string firstStr, secondStr;
	cout << "Enter the first string: "; cin >> firstStr;
	cout << endl << "Enter the second string: "; cin >> secondStr;
	string result = firstStr+secondStr;
	cout << endl << "Result: " << result;
	return 0;
}
