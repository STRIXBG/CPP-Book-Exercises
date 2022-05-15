/*
Zadacha: Da proverq dali dadeno chislo e prosto
*/

#include <iostream>

using namespace std;

int main() {
	int num;
	bool flag=false;
	cout << "Enter a positive number: "; cin >> num;
	for(int i=2; i<=num/2; i++){
		if(num % i == 0){
			flag = true;
		}
	}
	if(flag == true) cout << "The number is simple";
	else cout << "The number is not simple";
	return 0;
}
