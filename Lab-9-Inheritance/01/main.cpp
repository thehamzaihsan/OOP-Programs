// Write a program that defines a shape base class with a constructor that gives value to width and height. 
// Then define two derived classes triangle and rectangle, 
// that calculate the area of the shape. In the main, define two variables a triangle and 
// a rectangle and then compute their area. 

#include <iostream>
using namespace std;

class Shape{
    protected:
    int width;
    int height;
    public:
    Shape(){}
    Shape(int x , int y){
        width = x;
        height = y;
    }
};  

class Rectangle: public Shape{
    public:
    Rectangle(int x , int y):Shape(x , y){}
    int area(){
        return width * height;
    }
};

class Triangle: public Shape{
    private:
    int base;
    public:
    Triangle(int x , int y , int z):Shape(x , y){
        base = z;
    }
    float area(){
        return (base * height) * 0.5;
    }
};

int main(){
    Rectangle R1(4 , 5);
    cout << R1.area() << endl;
    Triangle T1(3 , 4 , 5);
    cout << T1.area() << endl;

}