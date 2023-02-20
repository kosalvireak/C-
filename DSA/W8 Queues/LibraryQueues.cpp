#include <iostream>
#include <queue>
#include <cstdlib>
using namespace std;

// push, pop, peak/top, size, isEmpty, isFull, make Display Function

void showQueues(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << "\t";
        q.pop();
    }
    cout << '\n';
}
void pushLoop(queue<int> q)
{

    int x;
    while (!q.empty())
    {
        cout << "Enter element: ";
        cin >> x;
        q.push(x);
    }
}
int main()
{
    system("cls");
    queue<int> q;
    q.push(20);
    q.push(40);
    q.push(30);
    q.push(99);
    cout << "The current queue is: " << endl;
    showQueues(q);
    q.pop();
    cout << "The current queue is: " << endl;
    showQueues(q);
    cout << "size of q: " << q.size() << endl;
    cout << "front of q: " << q.front() << endl;
    cout << "back of q: " << q.back() << endl;
    pushLoop(q);
    cout << "The current queue is: " << endl;
    showQueues(q);
    return 0;
}
