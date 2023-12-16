

#include <iostream>
#include <cmath>
using namespace std;

class Point_2D
{
protected:
    int x;
    int y;

public:
    Point_2D() {}
    Point_2D(int a, int b)
    {
        x = a;
        y = b;
    }
};

class Point_3D : public Point_2D
{
private:
    int z;

public:
    Point_3D() {}
    Point_3D(int a, int b, int c) : Point_2D(a, b)
    {
        z = c;
    }
    float distance(Point_3D P)
    {
        float d;
        int a = P.x - x;
        int b = P.y - y;
        int c = P.z - z;
        d = sqrt((a * a) + (b * b) + (c * c));
        return d;
    }
};

int main()
{
    Point_3D P1(2, 3, 4);
    Point_3D P2(7, 8, 9);
    cout << "Distance is: " << P1.distance(P2);
}