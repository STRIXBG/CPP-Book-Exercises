/*
Zadacha: Namirane na kvadratno uravnenie
*/

#include <iostream>
#include <cmath>

using namespace std;

double findDiscriminant(int a, int b, int c){
	double result;
	result = pow(b,2) - 4*a*c;
	return result;
}

double findRoot1(int a, int b, int c, double discriminant){
	double root;
	root = (-b + sqrt(discriminant))/(2*a);
	return root;
}

double findRoot2(int a, int b, int c, double discriminant){
	double root;
	root = (-b - sqrt(discriminant))/(2*a);
	return root;
}

double findSingleRoot(int a, int b){
	double root;
	root = -b/(2*a);
	return root;
}

int main() {
	double a, b,c, discriminant;
	cout << "Enter a, b, c: "; cin >> a >> b >> c;
	discriminant = findDiscriminant(a, b, c);
	cout << endl << "The discriminant is: " << discriminant;
	double firstRoot = findRoot1(a, b, c, discriminant);
	double secondRoot = findRoot2(a, b, c, discriminant);
	if(discriminant > 0){
		cout << endl << "First root: " << firstRoot;
		cout << endl << "Second root: " << secondRoot;
	}
	else if(discriminant == 0){
		double singleRoot = findSingleRoot(a, b);
		cout << endl << "Root: " << singleRoot;
	}
	else if(discriminant < 0){
		cout << endl << "Negative discriminant. No solution";
	}
	return 0;
}
