/*
Zadacha: Swap with reference
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void cyclicSwap(int *a, int *b, int *c){
	int temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}

int main() {
	int a, b, c;
	cout << "Enter a, b, c: "; cin >> a >> b >> c;
	cout << endl << "Before: ";
	cout << endl << "a, b,c: " << a << ' ' << b << ' ' << c;
	cyclicSwap(&a, &b, &c);
	cout << endl << "After: ";
	cout << endl << "a, b,c: " << a << ' ' << b << ' ' << c;
	return 0;s
}
