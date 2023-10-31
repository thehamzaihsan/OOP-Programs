#include <iostream>
using namespace std;


class Complex
{
private:
    float real;
    float img;
public:
    Complex(){}
    Complex(float a , float b);
    Complex operator- (Complex v){
        Complex v_t;
        v_t.real = real - v.real;
        v_t.img = img - v.img;
        return v_t;
    }
    Complex operator*(Complex c){
        Complex v_t;
        v_t.real = (real*c.real)+ (-(img*c.img));
        v_t.img =  (real*c.img) + (c.real*img);
        return v_t;
    }
    void display(){
        cout << real << " + " << img << "i " << endl;
    }
};

Complex::Complex(float a , float b)
{
    real = a;
    img = b;
}


int main(){
    Complex A(3 , 4);
    Complex B(9 , 8);
    Complex C = A-B;
    cout << "Add:";
    C.display();
    C = A*B;
    cout << "Multiply:";
    C.display();
    return 0;
}