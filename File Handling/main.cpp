#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // takes file input
    ifstream myfl_i;
    // input file location
    myfl_i.open("file.dat");

    // variable to store a
    int a;

    // a = to integer stored in the file
    myfl_i >> a;
    // outputing a
    cout << a;
    // increasing a value
    a = a + 1;
    // closing input file
    myfl_i.close();

    // opening output file
    ofstream myfl_o("file.dat");
    // puting new a variable in the txt file
    myfl_o << a;

    // closing the file
    myfl_o.close();

    return 0;
}
