#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length , breadth;
public:
    Rectangle(int x, int y);
    Rectangle operator+(Rectangle R){
        Rectangle R1(R.length+length , R.breadth+ breadth);
        return R1;
    }
    void display(){
        cout << "length: " << length << " breadth: " << breadth << endl;
    }
};

Rectangle::Rectangle(int x = 0, int y = 0)
{
    length = x;
    breadth = y;
}




int main(){
    Rectangle R1(3 , 4);
    Rectangle R2(5 , 6);
    Rectangle R3 = R1 + R2;
    R3.display();
    return 0;
}