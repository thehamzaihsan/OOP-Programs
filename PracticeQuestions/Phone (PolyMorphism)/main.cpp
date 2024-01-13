#include <iostream>
using namespace std;

class Phone
{
private:
    int phoneNumber;
    string name;

public:
    Phone(int pN, string n) : phoneNumber(pN), name(n) {}
    void virtual CallMyFamily(string str)
    {
        cout << ".....";
    }
};

class SmartPhone : public Phone
{
private:
    int cameraRes;

public:
    SmartPhone(int cR, int pN, string n) : cameraRes(cR), Phone(pN, n) {}
    void CallMyFamily(string str)
    {
        cout << str;
    }
};

class KeyPadPhone : public Phone
{
private:
    bool isFlash;

public:
    KeyPadPhone(bool iF, int pN, string n) : isFlash(iF), Phone(pN, n) {}
    void CallMyFamily(string str)
    {
        cout << str;
    }
};

int main()
{
    Phone *Galaxy = new SmartPhone(10, 0313, "hamza");
    Galaxy->CallMyFamily("call papa");
}