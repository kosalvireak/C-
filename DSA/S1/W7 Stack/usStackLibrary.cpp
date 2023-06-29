#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

// push, pop, peak/top, size, isEmpty, isFull, make Display Function

int showStack(stack<int> myStack)
{
    cout
        << "The current element in my Stack: ";
    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
}
int main()
{
    system("cls");
    stack<int> myStack;

    // The values pushed in the stack should be of the same
    // data which is written during the declaration of stack
    cout << "\nI push 5 4 3 2 1 0 to myStack" << endl;
    myStack.push(5);
    myStack.push(4);
    myStack.push(3);
    myStack.push(2);
    myStack.push(1);
    myStack.push(0);

    showStack(myStack);
    cout << "\nI pop 3 times from myStack" << endl;
    myStack.pop();
    myStack.pop();
    myStack.pop();

    showStack(myStack);
    cout << "\nI display the top of myStack: " << myStack.top()
         << endl;

    cout << "\nI display myStack size: " << myStack.size()
         << endl;

    cout << "\nI check myStack if it's empty (0 is empty/1 is not empty): " << myStack.empty() << endl;

    showStack(myStack);
}
