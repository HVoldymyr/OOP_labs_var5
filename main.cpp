#include "matrix.hpp"
#include <iostream>

using namespace std;

int main()
{
	int rows, cols;

	cout << "Enter the number of rows and cols for matrix: " << endl;
	cin >> rows >> cols;

	Matrix mat(rows, cols);
	cout << "Enter elements for the martrix: " << endl;
	cin >> mat;

	cout << "Matrix: " << endl;
	cout << mat;

	return 0;
}