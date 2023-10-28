#include <iostream>
using namespace std;

class Sphere
{
private:
    int radius;
    float Area;
public:

    int set(int n);
    int get();
    int area();
};

int Sphere::set(int n)
{
    radius = n;
}

int Sphere::area(){
    Area = 4*3.14*radius*radius;
}
int Sphere::get(){
    cout << "Area: " << Area;
}



int main(){
    int radius_t;
    cout << "Enter Radius: ";
    cin >> radius_t;
    cout << endl;
    Sphere S;
    S.set(radius_t);
    S.area();
    S.get();
    return 0;
}