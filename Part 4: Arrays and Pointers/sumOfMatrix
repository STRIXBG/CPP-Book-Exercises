/*
Zadacha: Subirane na matrici
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	//Smetki i promenlivi:
	int rows, columns;
	cout << "Enter the number of rows [1, 100]: "; cin >> rows;
	cout << endl << "Enter the number of columns [1, 100]: "; cin >> columns;
	int firstMatrix[rows][columns], secondMatrix[rows][columns];
	int sumMatrix[rows][columns];
	cout << endl << "Enter the items of the first matrix";
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			cout << endl << "Enter value for Row: " << i+1 << " Column: " << j+1<< " -->  ";
			cin >> firstMatrix[i][j];
		}
	}
	cout << endl << endl << "Enter the items of the second matrix";
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			cout << endl << "Enter value for Row: " << i+1 << " Column: " << j+1<< " -->  ";
			cin >> secondMatrix[i][j];
		}
	}
	//Subirane na matricite:
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			sumMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
		}
	}
	//Izvejdane na rezultata:
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			cout << sumMatrix[i][j];
			if(j == columns-1) cout << endl << endl;
		}
	}
	return 0;
}
