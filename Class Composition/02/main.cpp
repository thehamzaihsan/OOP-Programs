#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string firstName;
    string lastName;

public:
    Person(string S1 , string S2){
        firstName = S1;
        lastName = S2;
    }
    Person(){}

    string getName(){
        string str = firstName + " " + lastName;
        return str;
    }
};

class Date{
private:
    int day;
    int month;
    int year;
public:
    Date(int a , int b , int c){
        day = a;
        month = b;
        year = c;
    }
    Date(){}
    string getDate(){
        string str = to_string(day) + "-" + to_string(month) + "-" + to_string(year);
        return str;
    }

};

class BirthdayInfo{
private:
    Person person;
    Date date;

public:
    BirthdayInfo(Person P , Date D){
        person = P;
        date = D;
    }
    void display(){
        cout << person.getName() << endl;
        cout << date.getDate();
    }
};

int main()
{
    Person P("hamza" , "ihsan");
    Date D( 28 , 12 , 2000);
    BirthdayInfo info(P , D);    
    info.display();
}   