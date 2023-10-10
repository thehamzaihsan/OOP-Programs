#include <iostream> 
using namespace std;


class Student{
    private:
    int a;
    int b;
    public:
    Student(){
        a = 0;
        b = 0;
    }
    Student(int a_t, int b_t){
        a = a_t;
        b = b_t;
    }
    void display(){
        cout << a << " " << b << endl;
    }
};
int main()
{
    Student S1;
    Student S2(4, 5);
    S1.display();
    S2.display();
    return 0;
}