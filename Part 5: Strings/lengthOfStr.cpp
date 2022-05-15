/*
Zadacha: Namirane na duljina na string
*/

#include <iostream>

using namespace std;

int main() {
	
	int length;
	string line;
	cout << "Enter string: "; cin >> line;
	for(int i=0; line[i] != '\0'; ++i){
		length+=1;
	}
	cout << endl << "Length is: " << length;
	return 0;
}
