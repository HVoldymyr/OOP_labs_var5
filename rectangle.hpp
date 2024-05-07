#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle
{
	double lenght;
	double width;

public:
	// default cons
	Rectangle();
	// parameter cons
	Rectangle(double l, double w);
	// copy cons
	Rectangle(const Rectangle& cpy);
	// destructor
	~Rectangle();

	void setLenght(double l);
	double getLenght();
	void setWidth(double w);
	double getWidth();

	double area();
	double perimeter();

	void printInfo() const;
};
#endif // !RECTANGLE_H