/*
Zadacha: Zapazvane na informaciq za student v struktura
*/

#include <iostream>

using namespace std;

struct student
{
	string name;
	int ticket;
	int group;
} s;

int main() {
	cout << "Enter info:";
	cout << endl << "Name: "; cin >> s.name;
	cout << endl << "Group: "; cin >> s.group;
	cout << endl << "Ticket: "; cin >> s.ticket;
	cout << endl << endl << "Displaying info:";
	cout << endl << "Name: " << s.name;
	cout << endl << "Group: " << s.group;
	cout << endl << "Ticket: " << s.ticket;
	return 0;
}
