#ifndef  MATRIX
#define MATRIX

#include <iostream>

using namespace std;

const int MAX_SIZE = 20;

class Matrix
{
private:
	int rows;
	int cols;
	int* data;

public:
	Matrix(int rows, int cols);
	Matrix(const Matrix& m);
	~Matrix();

	Matrix& operator=(const Matrix& m);

	int* operator[](int row);

	void operator()(int rows, int cols);

	int getRows() const;
	int getCols() const;

	friend ostream& operator<<(ostream& os, const Matrix& m);
	friend istream& operator>>(istream& is, Matrix& m);

};
#endif // ! MATRIX