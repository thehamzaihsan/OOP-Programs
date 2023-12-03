#include <iostream>
using namespace std;

class Point
{
private:
    float x;
    float y;

public:
    Point() {}
    Point(float a, float b)
    {
        x = a;
        y = b;
    }
    void input()
    {
        cin >> x;
        cin >> y;
    }
    float getx(){
        return x;
    }
    float gety(){
        return y;
    }
    void friend operator+( Point , Point);
};

void operator+(Point P1 , Point P2){
    cout << "P3: " << endl;
   cout << P1.x + P2.x << endl;
   cout << P1.y + P2.y << endl;
}
int main()
{
    Point P1(5, 11.5);
    Point P2;
    P2.input();
    P1 + P2; // non-member function

    return 0;
}
