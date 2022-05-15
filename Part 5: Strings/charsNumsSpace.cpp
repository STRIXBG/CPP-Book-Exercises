/*
Zadacha: Namirane na chistota,  spaces i simvoli
*/

#include <iostream>

using namespace std;

int main() {
	
	int total = 0; int space = 0; int nums = 0;
	char line[500];
	cout << "Enter string: "; cin >> line;
	for(int i=0; line[i]!='\0'; ++i){
		if(line[i] >= '0' && line[i] <= '9')
		{
		  	nums+=1;
		}
		else if(line[i] == ' ') 
		{
			space += 1;
		}		
		else 
		{
			total+= 1;
		}
	}
	
	cout << endl << "Chars: " << total;
	cout << endl << "Spaces: " << space;
	cout << endl << "Numbers: " << nums;
	return 0;
}
