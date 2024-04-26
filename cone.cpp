#include "cone.hpp"
#include <iostream>
#include <cmath>

using namespace std;

void Cone::setRadius(double r)
{
	radius = r;
}

double Cone::getRadius()
{
	return radius;
}

void Cone::setHeight(double h)
{
	height = h;
}

double Cone::getHeight()
{
	return height;
}

double Cone::volume()
{
	return 3.14 * radius * radius * height / 3;
}

double Cone::surfaceArea()
{
	return 3.13 * radius * (radius + sqrt(radius * radius + height + height));
}