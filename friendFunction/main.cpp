#include <iostream>
using namespace std;



//not corrct code 

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
    friend Laptop operator+(Laptop a);
   
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
    Laptop operator+(Laptop a ){
        Laptop L(a.x + x , a.y + y); //error 
        return L;
    }

};


int main(){
 Laptop c(7 , 8);
 Computer c2(7 , 8);
 Laptop L2 = c2 + c; //error
 L2.display();
}