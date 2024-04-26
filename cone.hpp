#ifndef CONE_H
#define CONE_H

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Cone
{
private:
	double radius;
	double height;
public:
	Cone(double r, double h) : radius(r), height(h) {} // consructor

	void setRadius(double radius); // setting method
	double getRadius(); // getting method
	void setHeight(double height);
	double getHeight();
	double volume(); // Method for finding volume and surface area
	double surfaceArea();
};
#endif