#include <iostream>
using namespace std;

class Employee{
    private:
    int id;
    float compen;
    public:
    void input(int id_t , float compen_t){
        id = id_t;
        compen = compen_t;
    }
    void output(){
        cout <<"Employee id is: "<< id << endl;
        cout << "Employee Compensation is: " << compen << endl;
    }
};


int main(){
    Employee employee_array[3];
    
    for (int i = 0; i < 3; i++)
    {
        employee_array[i].input(5 , 10);

    }
        employee_array[1].output();
    
    return 0;
}