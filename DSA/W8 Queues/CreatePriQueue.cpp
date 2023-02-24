#include <iostream>
using namespace std;
class Queue // ascending
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
    bool InsertQ(int NewItem); //
    int RemoveQ();             //
    int PeekFrontQ();          //
    int SizeQ();               //
    void display();
    bool isFull(); //
    bool isEmptyQ();
};
bool searchIndex(int min, int insertValue, int max)
{
    for (int i = min; i <= max; i++)
    {
        if (i == insertValue)
        {
            return true;
        }
    }
    return false;
};
int Queue::RemoveQ() // Remove the front element
{

    if (rear < 0) // Check if the queue is empty
    {
        cout << "Your queue is empty" << endl;
    }
    else
    {
        int num = array[front];
        front++; // Increment the front so that front take the next index
        return num;
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
bool Queue::InsertQ(int num)

// TODO: 1. Create a function that accept min, max, insert_element: func should loop from min to max return true if found insert_element in between
// TODO: 2. assign min to index of 0, max to index of 1 .
// TODO: 3. Increasing 1 to min and max after function return false
// TODO: 4. If function return true the index of insert_element is max.
// TODO: 5. loop from max to the end of index and increase the index of each element by 1
// TODO: 6. assign index of max to insert_element

{
    if (rear == maxSize)
    {
        cout << "Your queue is full !!" << endl;
        return false;
    }
    else
    {
        array[rear] = num; // insert element to the current rear index then increase the index
        rear++;
        return true;
    }
};
void Queue::display()
{
    cout << "queue elements: ";
    if (front == rear)
    {
        cout << "No elements";
    }
    else
    {

        for (int i = front; i < rear; i++)
        {
            cout << " " << array[i] << " ";
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
    Queue queue(10);
    // queue.InsertQ(1);
    // queue.InsertQ(2);
    // queue.InsertQ(3);
    // queue.InsertQ(4);
    // queue.InsertQ(5);
    // queue.InsertQ(6);
    // queue.InsertQ(7);
    // queue.InsertQ(8);
    // queue.InsertQ(9);
    // queue.InsertQ(10);
    // cout << "remove " << queue.RemoveQ() << endl;
    // cout << "remove " << queue.RemoveQ() << endl;
    // cout << "remove " << queue.RemoveQ() << endl;
    // cout << "queue front: " << queue.PeekFrontQ() << endl;
    // cout << "queue size: " << queue.SizeQ() << endl;

    // queue.display();
    // cout << "\nqueue empty: " << queue.isEmptyQ() << endl;
    // cout << "queue full: " << queue.isFull() << endl;
    cout << "searchIndex: " << searchIndex(4, 3, 9);
};