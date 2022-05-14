/*
Zadacha: Proverka na factorial
*/

#include <iostream>

using namespace std;

int main() {
	int num, result=1;
	cout << "Enter a number: "; cin >> num;
	cout << endl;
	int numTmp = num;
	while(numTmp > 0){
		int rem = numTmp;
		result *= rem;
		numTmp -=1;
	}
	cout << "Factorial of " << num << " is " << result;
	return 0;
}
