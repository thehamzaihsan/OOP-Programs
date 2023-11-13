
#include <iostream>
using namespace std;

class Double{
private:
    static int x;
public:
    Double(){
        x = 0;
    }
    static void change(){
        x++;
    }

    int getx(){
        return x;
    }


};
int main(){
  Double D1;
    Double D2;
  D1.change();
  D2.change();
  cout << D2.getx();
}

