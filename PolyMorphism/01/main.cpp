#include <iostream>
#include <string>
using namespace std;

class Faculity
{
private:
    int ID;
    string name;

public:
    Faculity(int I, string n)
    {
        ID = I;
        name = n;
    }
    int virtual salary()
    {
        cout << "No Salary Data" << endl;
    }
};

class Permenant_Fac : public Faculity
{
private:
    int YOS;
    int Basic_pay;

public:
    Permenant_Fac(int Y, int BP, string name, int ID) : Faculity(ID, name)
    {
        YOS = Y;
        Basic_pay = BP;
    }
    int salary()
    {
        int salary;
        salary = Basic_pay + (Basic_pay / 10) + (Basic_pay / 4);
        return salary;
    }
};

class Visiting_Fac : public Faculity
{
private:
    int hour_rate;
    int hours;

public:
    Visiting_Fac(int h, int hr, string name, int ID) : Faculity(ID, name)
    {
        hour_rate = hr;
        hours = h;
    }
    int salary()
    {
        return hour_rate * hours;
    }
};

int main()
{
    const int Faculity_Count = 2;

    //here pointer of array of pointer of Faculity have been generated.
    Faculity** Faculity_Array = new Faculity*[Faculity_Count];

    for (int i = 0; i < Faculity_Count; i++)
    {
        char p;
        cout << "Do you want Permenent (P) or Visiting Faculity (V): ";
        cin  >> p;
        if (p == 'V')
        {
            int ID, h, hr ;
            string n;
            cout << "Enter ID: ";
            cin >> ID;
            cout << "Enter HR: ";
            cin >> hr;
            cout << "Enter name: ";
            cin >> n;
            cout << "Enter hours: ";
            cin >> h;
            Faculity_Array[i] = new Visiting_Fac(h , hr, n , ID);
        }
        else if(p == 'P'){
            int ID, BP, Y ;
            string n;
            cout << "Enter ID: ";
            cin >> ID;
            cout << "Enter Bp: ";
            cin >> BP;
            cout << "Enter name: ";
            cin >> n;
            cout << "Enter Years of Service: ";
            cin >> Y;
            
            Faculity_Array[i] = new Permenant_Fac(Y , BP , n , ID);
        }
        
      cout << "Salary: " << i << " " << Faculity_Array[i]->salary() << endl;
    }
    

}
