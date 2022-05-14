#include <iostream>

using namespace std;

int main() {
	int num;
	int biggest;
	cout << "Enter first number: "; cin >> num;
	biggest = num;
	cout << endl << "Enter second number: "; cin >> num;
	if(num > biggest) biggest = num;
	cout << endl << "Enter third number: "; cin >> num;
	if(num > biggest) biggest = num;
	cout << "The biggest entered number is: " << biggest;
	return 0;
}
