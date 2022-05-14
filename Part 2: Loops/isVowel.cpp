#include <iostream>

using namespace std;

int main() {
	char ch;
	cout << "Enter a character: "; cin >> ch;
	if(ch == 'a' || ch == 'o' || ch == 'u' || ch == 'e' || ch == 'i'){
		cout << endl << "The character is vowel";
	}
	else{
		cout << endl << "The character is consonant";	
	}
	return 0;
}
