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
    int id_t;
    float compen_t;
    for (int i = 0; i < 3; i++)
    {
        cout << "Employee no " << i +1 << endl;
        cout << "Enter Id ";
        cin >> id_t;
        cout << "Enter Compensation";
        cin >> compen_t;
        employee_array[i].input(id_t , compen_t);
        cout << endl;

    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        employee_array[i].output();
    }
    
    
    return 0;
}