#include "Cone.h"

int Cone::count = 0;

Cone::Cone(string name, double r, double h) 
{
    objectName = name;
    radius = r;
    height = h;
    count++;
}

int Cone::getCount() 
{
    return count;
}

string Cone::getObjectName()
{
    return objectName;
}

double Cone::getRadius()
{
    return radius;
}

double Cone::getHeight()
{
    return height;
}
