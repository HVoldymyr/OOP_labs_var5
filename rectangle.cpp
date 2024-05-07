#include <iostream>
#include "rectangle.hpp"

using namespace std;

// default cons
Rectangle::Rectangle()
{
	cout << "Default constructor." << endl;
	lenght = 0;
	width = 0;
}

// parameter cons
Rectangle::Rectangle(double l, double w)
{
	cout << "Parameter constructor." << endl;
	lenght = l;
	width = w;
}

// copy cons
Rectangle::Rectangle(const Rectangle& cpy)
{
	cout << "Copy constructor." << endl;
	lenght = cpy.lenght;
	width = cpy.width;
}

// destructor
Rectangle::~Rectangle()
{
	cout << "Destructor." << endl;
}

void Rectangle::setLenght(double l)
{
	lenght = l;
}

double Rectangle::getLenght()
{
	return lenght;
}

void Rectangle::setWidth(double w)
{
	width = w;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::area()
{
	return lenght * width;
}

double Rectangle::perimeter()
{
	return (2 * lenght) + (2 * width);
}

void Rectangle::printInfo() const
{
	cout << "Rectangle: length = " << lenght << ", width = " << width << endl;
}
