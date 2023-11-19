#include <iostream>
using namespace std;

class Friends
{
private:
    int x;
    int y;
public:
Friends(){}
    Friends(int a , int b){
        x = a;
        y = b;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    friend int sum(Friends a);
};
int sum(Friends a){
    return (a.getx() + a.gety());
}
int main(){
 Friends c(7 , 8);
 cout << sum(c);
}