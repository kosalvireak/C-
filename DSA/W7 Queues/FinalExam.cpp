#include <iostream>
using namespace std;
class Queue
{
public:
    int maxSize;
    int array[10];
    int rear = 0;
    int front = 0;
    Queue(int maxSize)
    {
        this->maxSize = maxSize;
    };
    void InsertQ(int NewItem); //
    void RemoveQ();            //
    int PeekFrontQ();          //
    int SizeQ();               //
    void display();
    bool isFull(); //
    bool isEmptyQ();
};
void Queue::RemoveQ() // Remove the front element
{
    if (rear < 0) // Check if the queue is empty
    {
        cout << "The seat is empty" << endl;
    }
    else
    {
        int num = array[front];
        front++; // Increment the front so that front take the next index
        cout << "Tokens " << num << " Please go to the available counter." << endl;
    }
};
int Queue::PeekFrontQ()
{
    if (front == rear)
    {
        return 0;
    }
    else
    {
        int num = array[front];
        return num;
    }
};
int Queue::SizeQ()
{
    int num = rear - front; // biggest index - smallest index = current size
    return num;
};
void Queue::InsertQ(int num)
{
    if (rear == maxSize)
    {
        cout << "Sorry cannot take Tokens " << num << ", the capacity is full!!!" << endl;
    }
    else
    {
        array[rear] = num; // insert element to the current rear index then increase the index
        rear++;
        cout << "Please find the seat and wait for a moment Tokens " << num << endl;
    }
};
void Queue::display()
{
    cout << "=============== The Tokens Waiting ===============" << endl;
    if (front == rear)
    {
        cout << "No waiting Tokens. The seat is empty.";
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            cout << "Tokens " << array[i] << endl;
        }
    }
};
bool Queue::isFull()
{
    bool result = (rear == maxSize) ? true : false; // if the biggest index = max size thus queue is full
    return result;
};
bool Queue::isEmptyQ()
{
    bool result = (rear == front) ? true : false; // if the front meet rear queue is empty
    return result;
};
int main()
{
    system("cls");
    cout << "========= Welcome to the ITE M1 Hospital. =========" << endl;
    Queue queue(10);
    queue.InsertQ(1);
    queue.InsertQ(2);
    queue.InsertQ(3);
    queue.InsertQ(4);
    queue.InsertQ(5);
    queue.InsertQ(6);
    queue.InsertQ(7);
    queue.InsertQ(8);
    queue.InsertQ(9);
    cout << endl;
    // queue.InsertQ(10);
    // queue.InsertQ(11);
    // queue.InsertQ(12);
    queue.RemoveQ();
    queue.RemoveQ();
    queue.RemoveQ();
    queue.display();
    // cout << "\nqueue empty: " << queue.isEmptyQ() << endl;
    // cout << "queue full: " << queue.isFull() << endl;
    // cout << "queue front: " << queue.PeekFrontQ() << endl;
    // cout << "queue size: " << queue.SizeQ() << endl;
};