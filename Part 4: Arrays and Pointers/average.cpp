/*
Zadacha: Namirane na average ot chisla
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int numberOfItems;
	int num[100], sum;
	cout << "Enter number of items: "; cin >> numberOfItems;
	for(int i=1; i<=numberOfItems; i++){
		cout << i << "#:"; cin >> num[i];
		sum += num[i];
	}
	int average = sum/numberOfItems;
	cout << average;
	return 0;
}
