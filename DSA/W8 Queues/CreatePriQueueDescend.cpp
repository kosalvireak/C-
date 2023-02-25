#include <iostream>
using namespace std;
class Queue // descending
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

// loop to current queue from front to rear find element that bigger then insert element, that the correct position to insert new element.
// loop from rear back to the max index and reassign the element
// assign index of max to insert_element
{
    if (rear == maxSize)
    {
        cout << "Your queue is full !!" << endl;
        return false;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            if (num > array[i])
            {
                int temp = array[i];

                for (int j = rear; j > i; j--)
                {
                    array[j] = array[j - 1];
                }
                array[i] = num;
                break;
            }
            else
            {
                array[rear] = num;
            }
        }
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
    queue.InsertQ(4);
    queue.InsertQ(2);
    queue.InsertQ(9);
    queue.InsertQ(9);
    queue.InsertQ(7);
    queue.InsertQ(5);
    queue.InsertQ(5);
    queue.InsertQ(6);
    queue.InsertQ(1);
    cout << "remove " << queue.RemoveQ() << endl;
    cout << "remove " << queue.RemoveQ() << endl;
    cout << "remove " << queue.RemoveQ() << endl;
    cout << "queue front: " << queue.PeekFrontQ() << endl;
    cout << "queue size: " << queue.SizeQ() << endl;

    queue.display();
    cout << "\nqueue empty: " << queue.isEmptyQ() << endl;
    cout << "queue full: " << queue.isFull() << endl;
};