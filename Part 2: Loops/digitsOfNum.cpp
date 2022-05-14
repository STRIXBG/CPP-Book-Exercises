/*
Zadacha: Da izveda Broq cifri v chislo
*/

#include <iostream>

using namespace std;

int main() {
	int num, count;
	cout << "Enter a number: "; cin >> num;
	cout << endl;
	int tmpNum = num;
	while(tmpNum>0){
		tmpNum/=10;
		count++;
	}
	cout << "All digits of " << num << " are " << count;
	return 0;
}
