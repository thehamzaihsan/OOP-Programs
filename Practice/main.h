#pragma once
#include <iostream>
using namespace std;

class Distance
{
private:
    int a;
    int b;
public:
    Distance();
    Distance(int a, int b);
    void getDist();
    void ShowDist();
    void AddDist(Distance d1 , Distance d2);
};

Distance::Distance()
{
    a = 10;
    b = 10;
}

Distance::Distance(int a_t , int b_t){
    a = a_t;
    b = b_t;
}


void Distance::getDist(){
    cout << "Enter Inches";
    cin >> a;
    cout << "Enter Feet";
    cin >> b;
}


void Distance::ShowDist(){
    cout << "Inches: " << a << " Feet: " << b;
}

void Distance::AddDist(Distance d1, Distance d2){
    a = d1.a + d2.a;
    b = 0;

    if (a >= 12)
    {
        a -= 12;
        b++;
    }
    b += d1.b + d2.b;
    
}
