#include <iostream>
using namespace std;
#include <string>

int main()
{
    string greetings = "hello";
    string name;
    cin >> name;
    string whole = greetings + " " + name;
    cout << whole << endl;
    string prev_name = name;
    int prev_length = name.length();
    string new_name;
    cin >> new_name;
    if (prev_name > new_name)
    {
        string nwhole = whole.replace(6, prev_length, new_name);
        cout << nwhole;
    }
    else
    {

        cout << whole;
    }
}