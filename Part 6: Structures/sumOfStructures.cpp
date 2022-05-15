/*
Zadacha: Subirane na dve stukturi
*/

#include <iostream>

using namespace std;

struct Distance
{
	int steps;
	float m;
} d1, d2, sumOfDistances;

int main() {
	cout << "Structure 1: ";
	cout << endl << "Enter number of steps: "; cin >> d1.steps;
	cout << endl << "Enter number of meters: "; cin >> d1.m;
	cout << endl << endl << "Structure 2: ";
	cout << endl << "Enter number of steps: "; cin >> d2.steps;
	cout << endl << "Enter number of meters: "; cin >> d2.m;
	sumOfDistances.m = d1.m + d2.m;
	sumOfDistances.steps = d1.steps + d2.steps;
	cout << endl << endl << "Result: ";
	cout << endl << "steps: " << sumOfDistances.steps << "  meters: " << sumOfDistances.m;
	return 0;
}
