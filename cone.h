#ifndef CONE_HPP
#define CONE_HPP

#include <string>
using namespace std;

class Cone 
{
private:
    static int count;
    string objectName;
    double radius;
    double height;

public:
    Cone(string name, double r, double h);
    static int getCount();
    string getObjectName();
    double getRadius();
    double getHeight();
};

#endif // CONE_HPP
