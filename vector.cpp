#include "vector.h"
#include <iostream>

using namespace std;

Vector Vector::operator+(const Vector& op2) const
{
    return Vector(x + op2.x, y + op2.y, z + op2.z);
}

Vector& Vector::operator+=(const Vector& op2)
{
    x += op2.x;
    y += op2.y;
    z += op2.z;
    return *this;
}

Vector Vector::operator%(int scalar) const
{
    return Vector(x * scalar, y * scalar, z * scalar);
}

Vector& Vector::operator*=(int scalar)
{
    x *= scalar;
    y *= scalar;
    z *= scalar;
    return *this;
}

Vector& Vector::operator=(const Vector& op2)
{
    x = op2.x;
    y = op2.y;
    z = op2.z;
    return *this;
}

Vector& Vector::operator--()
{
    --x;
    --y;
    --z;
    return *this;
}

Vector Vector::operator--(int)
{
    Vector temp = *this;
    --(*this);
    return temp;
}

Vector operator*(const Vector& vec, int scalar)
{
    return Vector(vec.getX() * scalar, vec.getY() * scalar, vec.getZ() * scalar);
}
