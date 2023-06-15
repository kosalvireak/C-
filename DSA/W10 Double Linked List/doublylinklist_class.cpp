#include <iostream>
using namespace std;
class DoublyLinkedList
{
private:
    struct Node
    {
        int data;
        Node *next;
        Node *prev;
        Node(int data)
        {
            this->data = data;
            this->prev = nullptr;
            this->next = nullptr;
        }
    };
    Node *head;
    Node *tail;

public:
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    void addNode(int data) // addNode to front
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            head->next = tail;
            tail->prev = head;
            tail->next = nullptr;
        }
        else
        {
            newNode->next = head->next;
            newNode->prev = head;
            head->next = newNode;
        }
    }
    void printList()
    {
        Node *currentNode = head;
        while (currentNode != nullptr)
        {
            cout << currentNode->data << " ";
            currentNode = currentNode->next;
        }
    }
    void deletion(int data)
    { // delete front
        Node *currentNode = head;
        while (currentNode != nullptr)
        {
            if (currentNode->data == data)
            {
                currentNode->prev->next = currentNode->next;
                currentNode->next->prev = currentNode->prev;
                delete currentNode;
            }
            currentNode = currentNode->next;
        }
    }
};
int main()
{
    DoublyLinkedList list;
    list.addNode(10); // head
    list.addNode(1);  // tail
    list.addNode(2);
    list.addNode(8);
    list.addNode(25);
    list.addNode(5);
    list.addNode(18);
    list.printList();

    return 0;
}