#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    int x = 6;

public:
    student(int at) : x(at) {}
    void print()
    {
        cout << x;
    }
};

int main()
{
    student a(6);
    student b(7);
    student c(8);
    ofstream f("filee.dat", ios::binary);

    f.write((char *)(&a), sizeof(a));
    f.write((char *)(&b), sizeof(a));
    f.write((char *)(&c), sizeof(a));

    f.close();

    ifstream ifile("filee.dat", ios::binary);
    ifile.seekg(1 * sizeof(a));
    ifile.read((char *)(&a), sizeof(a));
    a.print();
    ifile.close();
}