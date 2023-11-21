#include <iostream>
using namespace std;
class Computer;
class Laptop
{
private:
    int x;
    int y;
public:
Laptop(){}
    Laptop(int a , int b){
        x = a;
        y = b;
    }
     void const display(){
        cout << x << endl;
        cout << y << endl;
    }
    friend Laptop operator+(Laptop a , Computer b);
   
};


class Computer
{
private:
    int x;
    int y;
public:
Computer(){}
    Computer(int a , int b){
        x = a;
        y = b;
    }
    friend Laptop operator+(Laptop a , Computer b);
};


Laptop operator+(Laptop a , Computer b){
    Laptop L(a.x + b.x , a.y + b.y);
    return L;
}


int main(){
 Laptop c(7 , 8);
 Computer c2(7 , 8);
 Laptop L2 =  c + c2;
 L2.display();
}