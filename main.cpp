#include <iostream>
#include "Vector.h"

using namespace std;

int main() 
{
    int x, y, z;

    cout << "Enter x, y, z for vector a: ";
    cin >> x >> y >> z;
    Vector a(x, y, z);

    cout << "Enter x, y, z for vector b: ";
    cin >> x >> y >> z;
    Vector b(x, y, z);

    Vector c;

    cout << "Adding vectors: " << endl;
    c = a + b;
    c.show();

    cout << "Scalar product with scalar 2: " << endl;
    c = a % 2;
    c.show();

    cout << "Multiplying vector by scalar 2: " << endl;
    c *= 2;
    c.show();

    cout << "Assigning vector b to vector a: " << endl;
    a = b;
    a.show();

    cout << "Post-decrementing vector a: " << endl;
    c = a--;
    a.show();
    c.show();

    cout << "Pre-decrementing vector b: " << endl;
    c = --b;
    b.show();
    c.show();

    return 0;
}
