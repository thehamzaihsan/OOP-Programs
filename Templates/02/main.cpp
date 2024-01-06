#include <iostream>
using namespace std;

template <class t1, class t2>
class Calculator
{
private:
    t1 a;
    t2 b;

public:
    Calculator(t1 x, t2 y) : a(x), b(y) {}
    float add();
    auto multiply() -> decltype(a*b);
};

template <class t1, class t2>
float Calculator<t1, t2>::add()
{
    return a + b;
}

template <class t1, class t2>
auto Calculator<t1, t2>::multiply() -> decltype(a*b)
{
    return a * b;
}

int main()
{
    Calculator<float, float> floated(2.2f, 2.3f);
    cout << floated.add() << endl;
    cout << floated.multiply() << endl;
    cout << "----" << endl;

    Calculator<int, int> number(2, 3);
    cout << number.add() << endl;
    cout << number.multiply() << endl;
    cout << "----" << endl;
}
