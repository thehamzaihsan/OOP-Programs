#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
    float CGPA;
    int ID;
public:
    Student() {}
    Student(float C , int I) : CGPA(C ) , ID(I) {}
    float getCGPA()
    {
        return CGPA;
    }
    bool operator>(Student s);
};

bool Student::operator>(Student s){
    if (CGPA > s.getCGPA())
    {
        return true;
    }
    else{
        return false;
    }
    
}


int main()
{

    Student std(2.0 , 01);
    Student std2(3.0 , 02);
    Student std3(2.0 , 02);

    ofstream f("std.dat", ios::binary);

    f.write((char *)(&std), sizeof(std));
    f.write((char *)(&std2), sizeof(std));
    f.write((char *)(&std3), sizeof(std));

    f.close();

    ifstream ifile("filee.dat", ios::binary);
    
    ifile.seekg(1 * sizeof(std));
    ifile.read((char *)(&std), sizeof(std));
    a.print();
    ifile.close();


}