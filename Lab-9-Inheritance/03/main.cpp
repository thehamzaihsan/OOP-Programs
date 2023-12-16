#include <iostream>
using namespace std;

// Create a class called Employee whose objects are records for an employee.
// This class will be a derived class of the base class Person. An employee record
// has an employee's name (inherited from the class Person), an annual salary
// represented as a single value of type double, hiring  year  and a national
//  insurance number, which is a value of type String.
// Your class should have a reasonable number of constructors and accessor
// functions, as well as a print function. Write a driver to fully test your class
// definition for 10 employees.

class Person
{
protected:
    string name;
    string NI_no;

public:
    Person() {}
    Person(string n, string ni)
    {
        name = n;
        NI_no = ni;
    }
};

class Employee: public Person
{
private:
   double a_salary;
   int h_year;
public:
    Employee(){}
    Employee(double a , int h , string n , string ni):Person(n , ni){
        a_salary = a;
        h_year = h;
    }
    void print(){
        cout << "name: " << name << endl;
        cout << "NI_no: "<< NI_no << endl;
        cout << "a_salary: " << a_salary << endl;
        cout << "h_year: " << h_year << endl;
        cout << endl;
        cout << endl;
    }
};

int main()
{
    Employee Employee_List[10];
    
    for (int  i = 0; i < 10; i++)
    {
       Employee E1(10000, 2000, "Hamza" , "42960");
       Employee_List[i] = E1;

    }
    
    for (int  i = 0; i < 10; i++)
    {
        Employee_List[i].print();
    }
    
    return 0;
}