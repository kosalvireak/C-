#include <iostream>
using namespace std;
class Stack
{

public:
    int maxSize;
    int array[100];
    Stack(int maxSize)
    {
        this->maxSize = maxSize;
    };

    int top = -1;

    bool push(int num);
    int pop();
    int peak();
    int size();
    bool isEmpty();
    bool isFull();
    void display();
};
bool Stack::push(int num)
{
    if ((top + 1) == maxSize)
    {
        cout << "Your stack is full !!" << endl;
        return false;
    }
    else
    {
        array[++top] = num;
        return true;
    }
};
int Stack::pop()
{

    if (top < 0)
    {
        cout << "Your stack is empty" << endl;
    }
    else
    {
        int num = array[top--];
        return num;
    }
};
int Stack::peak()
{
    int num = array[top];
    return num;
};
int Stack::size()
{
    return top + 1;
};
bool Stack::isEmpty()
{
    if (top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
};
bool Stack::isFull()
{
    if ((top + 1) == maxSize)
    {
        return true;
    }
    else
    {
        return false;
    }
};
void Stack::display()
{
    for (int i = 0; i <= top; i++)
    {
        cout << " " << array[i] << " ";
    }
};

int main()
{
    system("cls");
    Stack mystack(10);
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);
    mystack.push(6);
    mystack.push(7);
    mystack.push(8);
    mystack.push(9);
    mystack.push(10);
    cout << "pop " << mystack.pop() << endl;
    cout << "pop " << mystack.pop() << endl;
    cout << "pop " << mystack.pop() << endl;
    cout << "peak " << mystack.peak() << endl;
    cout << "size " << mystack.size() << endl;
    cout << "isEmpty " << mystack.isEmpty() << endl;

    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    cout << "isFull " << mystack.isFull() << endl;

    mystack.push(1);

    mystack.display();
}
