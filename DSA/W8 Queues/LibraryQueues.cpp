#include <iostream>
#include <queue>
#include <cstdlib>
using namespace std;

// push, pop, peak/top, size, isEmpty, isFull, make Display Function

void showQueues(queue<int> qq)
{
    while (!qq.empty())
    {
        cout << qq.front() << "\t";
        qq.pop();
    }
    cout << '\n';
}
int main()
{
    system("cls");
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(40);
    q.push(30);
    cout << "The current queue is: " << endl;
    showQueues(q);
    q.pop();
    cout << "The current queue is: " << endl;
    showQueues(q);
    cout << "size of q: " << q.size() << endl;
    cout << "front of q: " << q.front() << endl;
    cout << "back of q: " << q.back() << endl;
    return 0;
}
