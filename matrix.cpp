#include "matrix.hpp"
#include <iostream>

using namespace std;

Matrix::Matrix(int rows, int cols)
{
	this->rows = rows;
	this->cols = cols;
	data = new int[rows * cols];
}

Matrix::Matrix(const Matrix& m)
{
	this->rows = m.rows;
	this->cols = m.cols;

	data = new int[rows * cols];

	for (int i = 0; i < rows * cols; i++)
	{
		data[i] = m.data[i];
	}
}

Matrix::~Matrix()
{
	delete[] data;
}

Matrix& Matrix::operator=(const Matrix& m)
{
	if (this != &m)
	{
		delete[] data;
		rows = m.rows;
		cols = m.cols;
		data = new int[rows * cols];

		for (int i = 0; i < rows * cols; i++)
		{
			data[i] = m.data[i];
		}
	}
	return *this;
}

int* Matrix::operator[](int row)
{
	return &data[row * cols];
}

void Matrix::operator()(int rows, int cols)
{
	this->rows = rows;
	this->cols = cols;
	delete[] data;
	data = new int[rows * cols];
}

int Matrix::getRows() const
{
	return rows;
}

int Matrix::getCols() const
{
	return cols;
}

ostream& operator<<(ostream& os, const Matrix& m)
{
	for (int i = 0; i < m.rows; i++)
	{
		for (int j = 0; j < m.cols; j++)
		{
			os << m.data[i * m.cols + j] << " ";
		}
		os << endl;
	}
	return os;
}

istream& operator>>(istream& is, Matrix& m)
{
	for (int i = 0; i < m.rows; i++)
	{
		for (int j = 0; j < m.cols; j++)
		{
			is >> m.data[i * m.cols + j];
		}
	}
	return is;
}