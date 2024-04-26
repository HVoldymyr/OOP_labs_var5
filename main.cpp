#include <iostream>
#include "cone.hpp"

using namespace std;

int main()
{
	double radius;
	double height;

	cout << "Enter the radius of cone: ";
	cin >> radius;
	cout << "Enter the height of cone: ";
	cin >> height;

	Cone myCone(radius, height);

	cout << "The volume of the cone is: " << myCone.volume() << endl;
	cout << "The surface area of cone is: " << myCone.surfaceArea() << endl;

	return 0;
}