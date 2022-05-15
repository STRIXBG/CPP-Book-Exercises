/*
Zadacha: Namirane na nai golqmoto chislo ot masiv (array)
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int numberOfItems;
	int num[100]; double biggest;
	cout << "Enter number of items: "; cin >> numberOfItems;
	for(int i=1; i<=numberOfItems; i++){
		cout << i << "#:"; cin >> num[i];
		if(num[i] >= biggest) biggest = num[i];
	}
	cout << setprecision(2) << fixed << biggest;
	return 0;
}
