// Extend the Vector class by providing operator overloading functions to perform the following operations:
// •	- for subtraction of two Vector objects
// •	* for multiplication of a Vector by a scalar (i.e with some int value)
// Write a driver program (main() ) to test your class. Assume data members (int x, int y). write getter, setter functions.

#include <iostream>
using namespace std;


class Vector
{
private:
    int x;
    int y;
public:
    Vector(int a, int b );
    Vector(){}
    Vector operator- (Vector v){
        Vector v_t;
        v_t.x = x - v.x;
        v_t.y = y - v.y;
        return v_t;
    }

    Vector operator*(int a){
        Vector v_t;
        v_t.x = x *a;
        v_t.y = y *a;
        return v_t;
    }
    void display(){ 
        cout << "x: " << x << endl;
        cout << "y: " << y << endl; 

    }

};

Vector::Vector(int a , int b )
{
    x = a;
    y = b;
}




int main(){
    Vector A(3 , 4);
    Vector B(4 , 3);
    Vector C = A - B;
    C.display();
    C = C*10;
    C.display();
    return 0;
}