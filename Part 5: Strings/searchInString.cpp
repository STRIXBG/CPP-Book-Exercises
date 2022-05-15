/*
Zadacha: Namirane na chistota na char v string
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	char str[1000], ch;
	int frequency = 0;
	cout << "Enter a string: "; cin >> str;
	cout << endl << "Enter a char: "; cin >> ch;
	
	//Tursene:
	for(int i=0; str[i] != '\0'; ++i){
		if(ch == str[i]) frequency++;
	}
	
	//Rezultat:
	cout << endl << endl << frequency;
	return 0;
}
