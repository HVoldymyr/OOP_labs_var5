#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
    int x, y, z;

public:
    Vector() { x = y = z = 0; }
    Vector(int i, int j, int k) { x = i; y = j; z = k; }
    
    int getX() const { return x; }
    int getY() const { return y; }
    int getZ() const { return z; }
    
    Vector operator+ (const Vector& op2) const;
    Vector& operator+= (const Vector& op2);
    Vector operator% (int scalar) const;
    Vector& operator*= (int scalar);
    Vector& operator= (const Vector& op2);
    Vector& operator-- ();
    Vector operator-- (int);

    void show() const;
};

#endif // VECTOR_H
