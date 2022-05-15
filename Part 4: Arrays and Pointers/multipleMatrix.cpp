/*
Zadacha: Umnojenie na matrici
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	//Smetki i promenlivi:
	int matrixA[10][10], matrixB[10][10], resultMatrix[10][10];
	int colsA, rowsA;
	int colsB, rowsB;
	cout << "Enter the number of rows and cols for Matrix 1:  "; cin >> colsA >> rowsA;
	cout << endl << "Enter the number of rows and cols for Matrix 2:  "; cin >> colsB >> rowsB;
	
	//Proverka za umnojenie:
	while(colsA != rowsB){
		cout << endl << endl << "The number of Cols for Matrix 1 is not equal with Rows of Matrix 2";
		cout << endl << "Enter the number of rows and cols for Matrix 1:  "; cin >> colsA >> rowsA;
		cout << endl << "Enter the number of rows and cols for Matrix 2:  "; cin >> colsB >> rowsB;
	}
	
	//Vuvejdane na promenlivite za purvata matrica:
	cout << endl << endl << "Enter the items for first matrix";
	for(int i=0; i<rowsA; i++)
		for(int j=0; j<colsA; j++){
			cout << "Enter Row: " << i+1 << " Col: " << j+1 << " --> "; cin >> matrixA[i][j];
		}
		
	//Vuvejdane na promenlivite za vtorata matrica:
	cout << endl << endl << "Enter the items for second matrix";
	for(int i=0; i<rowsB; i++)
		for(int j=0; j<colsB; j++){
			cout << "Enter Row: " << i+1 << " Col: " << j+1 << " --> "; cin >> matrixB[i][j];
		}
		
	//Umnojavane na matrica A i matrica B:
	for(int i=0; i<rowsA; i++)
		for(int j=0; j<colsB; j++){
			resultMatrix[i][j] += matrixA[i][j] * matrixB[i][j];
		}
		
	//Rezultat:
	cout << endl << endl << "The result of Matrix1 * Matrix2 is:";
	for(int i=0; i<rowsA; i++)
		for(int j=0; j<colsB; j++){
			cout << "Row: " << i << " Col: " << j << " ---> " << resultMatrix[i][j];
		}
	return 0;
}
