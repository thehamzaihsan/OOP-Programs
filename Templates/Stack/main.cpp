#include <iostream>
using namespace std;

class Error
{
public:
    Error(string str) : message(str) {}
    string getMessage() { return message; }

private:
    string message;
};

template <class t1>
class Stack
{
private:
    int array_size;
    t1 *array = new t1;
    int MAX_SIZE;

public:
    Stack();
    bool empty();
    int size();
    t1 *top();
    void push(t1);
    void pop();
    int getsize()
    {
        return array_size;
    }
};

template <class t1>
bool Stack<t1>::empty()
{

    if (array_size > -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class t1>
int Stack<t1>::size()
{
    return array_size;
}

template <class t1>
Stack<t1>::Stack(/* args */)
{
    array_size = -1;
    MAX_SIZE = 3;
}

template <class t1>
void Stack<t1>::push(t1 t_object)
{
    if (array_size == MAX_SIZE)
    {
        throw Error("MAX SIZE REACHED");
    }
    else
    {

        array[array_size] = t_object;
        array_size++;
    }
}

template <class t1>
void Stack<t1>::pop()
{
    array_size--;
}

template <class t1>
t1 *Stack<t1>::top()
{
    return &array[array_size - 1];
}

int main()
{
    Stack<int> INT_STACK;
    try
    {
         
        INT_STACK.push(10); // 0
        INT_STACK.push(11); // 1
        INT_STACK.push(12); // 2
        INT_STACK.push(13); // 3
        INT_STACK.push(14); // 4
        INT_STACK.pop();
        cout << *INT_STACK.top() << endl;

    }
    catch(Error e)
    {
        cerr<< e.getMessage() << endl;
    }
    cout << *INT_STACK.top() << endl;
    
}