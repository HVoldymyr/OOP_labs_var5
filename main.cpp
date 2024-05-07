#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    int x1, y1, z1, x2, y2, z2;

    cout << "Enter first vector (3 values): ";
    cin >> x1 >> y1 >> z1;

    cout << "Enter second vector (3 values): ";
    cin >> x2 >> y2 >> z2;

    Vector a(x1, y1, z1), b(x2, y2, z2), c;

    cout << "c = a + b" << endl;
    c = a + b;

    cout << "a: " << a.getX() << ", " << a.getY() << ", " << a.getZ() << endl;
    cout << "b: " << b.getX() << ", " << b.getY() << ", " << b.getZ() << endl;
    cout << "c: " << c.getX() << ", " << c.getY() << ", " << c.getZ() << endl;

    int scalar;
    cout << "Enter a scalar for scalar multi: ";
    cin >> scalar;

    cout << "c % 2 (scalar multiplication)" << endl;
    c = c % scalar;
    cout << "c: " << c.getX() << ", " << c.getY() << ", " << c.getZ() << endl;

    return 0;
}
