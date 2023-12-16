// Create a class Employee with name, Id and salary as data members. Provide appropriate
// constructors, set, get and display methods in the class.
// In the main program, use a do-while loop to enter data for employees as long as
// the user desires and save all data to a file.
// Once the user is done with data entry, read the data for employees from the
// file and display the information of each employee.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Employee
{
private:
    int ID;
    string name;
    int salary;

public:
    Employee(int i, string s, int sl)
    {
        ID = i;
        name = s;
        salary = sl;
    }
    Employee() {}
    void const display()
    {
        fstream ifile;
        ifile.open("file.txt");
        ifile.seekg(0, ios::beg);
        string line;
        while (ifile)
        {
            getline(ifile, line);
            cout << line << endl;
        }
        ifile.close();
    }
    void savetofile()
    {
        fstream ifile;
        ifile.open("file.txt");
        ifile.seekg(0, ios::end);
        ifile << name << " " << ID << " " << salary << endl;
        ifile.close();
    }
    void setID(int i)
    {
        ID = i;
    }
    void setName(string n)
    {
        name = n;
    }
    void setSalary(int s)
    {
        salary = s;
    }
};

int main()
{

    int s;
    int i;
    string n;

    char f;
    Employee e;
    do
    {

        cout << "enter ID: ";
        cin >> i;
        cout << "enter name: ";
        cin >> n;
        cout << "Enter Salary: ";
        cin >> s;

        e.setID(i);
        e.setName(n);
        e.setSalary(s);
        e.savetofile();

    } while ((cin >> f) && f == 'y');

    e.display();
    char c;
    cout << "Do you want to search for a name(y):  ";
    cin >> c;

    if (c == 'y')
    {
        string name;
        string line;
        fstream ifile;
        ifile.open("file.txt");
        cin >> name;
        if (ifile.is_open())
        {
            while (getline(ifile, line))
            {
                if (line.find(name) != string::npos)
                {                                   
                    cout << line << endl;
                }
            }
            ifile.close();
        }
        else
        {
            cout << "Unable to open file";
        }
    }
}