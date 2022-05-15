/*
Zadacha: Da namerq posledovatelnostta na fibonaci
*/

#include <iostream>

using namespace std;

int main() {
	int terms;
	int firstLastNum, secondLastNum;
	cout << "Enter number of terms: "; cin >> terms;
	for(int i=0; i<=terms; i++){
		if(i == 0){
			cout << 0 << ' ';
			firstLastNum = 0;
			continue;
		}
		else if(i == 1){
			cout << 1 << ' ';
			secondLastNum = 1;
			continue;
		}
		if(i % 2 != 0){
			firstLastNum = firstLastNum+secondLastNum;
		}
		else if(i % 2 == 0){
			secondLastNum = secondLastNum+firstLastNum;
		}
		int sum = firstLastNum+secondLastNum;
		cout << sum << ' ';
	}
	return 0;
}
