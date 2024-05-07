#include <iostream>
#include "rectangle.hpp"

using namespace std;

int main()
{
	double lenght, width;

	Rectangle rect1;
	rect1.printInfo();

	Rectangle rect2(3, 7);
	rect2.printInfo();

	Rectangle rect3 = rect2;
	rect3.printInfo();

	return 0;
}