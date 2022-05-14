/*
Zadacha: Da vdigna chislo na stepen, bez da vklucha bibliotekata cmath
*/

#include <iostream>

using namespace std;

int main() {
	int num, degree;
	cout << "Enter a number: "; cin >> num;
	cout << endl << "Enter a degree: "; cin >> degree;
	int currentDeg = 1;
	int result = 1;
	while(currentDeg <= degree){
		result = result * num;
		currentDeg++;
	}
	cout << endl << "Result: " << result; 
	return 0;
}
