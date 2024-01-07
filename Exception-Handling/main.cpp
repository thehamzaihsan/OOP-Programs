#include <iostream>
using namespace std;

class Error
{
public:
    Error(string str) : message(str) {}
    string getMessage() { return message; }

private:
    string message;
};

class Divides
{
    int a;
    int b;

public:
    Divides(int x, int y) : a(x), b(y) {}
    float Divide()
    {

        if (b == 0)
        {
            throw Error("SHIT IT'S ZERO");
        }
        else
        {
            return a / b;
        }
    }
};

// Exception-Handling
int main()
{
    Divides d(4, 0);
    try
    {
        cout << d.Divide(); 
    }
    catch(Error e)
    {
        cerr << e.getMessage() << '\n';
    }
    
}
