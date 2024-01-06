#include <iostream>
using namespace std;

template <class t1>
class Stack
{
private:
    int array_size;
    t1* array = new t1;
public:
    Stack(/* args */);
    bool empty();
    int size();
    t1* top();
    void push(t1);
    void pop();
    int getsize(){
        return array_size;
    }
};

template <class t1>
bool Stack<t1>::empty(){

    if (array_size == 0)
    {
        return true;
    }
    else{
        return false;
    }
}

template <class t1>
int Stack<t1>::size(){
    return array_size;
}

template <class t1>
Stack<t1>::Stack(/* args */)
{
    array_size = -1;
}

template <class t1>
void Stack<t1>::push(t1 t_object){
    array[array_size] = t_object;
    array_size++;
}

template <class t1>
void Stack<t1>::pop(){
  array_size--;
}

template <class t1>
t1* Stack<t1>::top(){
  return &array[array_size - 1];
}


int main(){
    Stack<int> INT_STACK;
    INT_STACK.push(10); //1
    INT_STACK.push(11);
    INT_STACK.push(12);
    INT_STACK.push(13);
    INT_STACK.pop();
    cout << *INT_STACK.top();
}