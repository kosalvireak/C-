#include <iostream>
using namespace std;
class LinkedListNode // class of every single node
{
public:
    int data;                // properties of the node
    LinkedListNode *next;    // create a pointer to node
    LinkedListNode(int data) // constructor for a node (assign data to node properties and point to null)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList // class of whole link list
{
public:
    LinkedListNode *head;
    LinkedListNode *tail;
    LinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }
    void insertNode(int data) // insert at the end of list
    {
        LinkedListNode *newNode = new LinkedListNode(data);
        if (head == nullptr) // check if there is no node assign head to node
        {
            head = newNode;
            tail = newNode;
            tail->next = head; // point tail to head
        }
        else
        {
            tail->next = newNode; // last node point to new node
            tail = newNode;       // update tail to new node
            tail->next = head;    // point tail to head
        }
    }

    void lastNode()
    {
        LinkedListNode *currentNode = head;
        while (currentNode->next != head)
        {
            currentNode = currentNode->next;
        }
        cout << "Last node is: " << currentNode->data << endl;
    }
    void printList()
    {
        LinkedListNode *currentNode = head;
        while (currentNode->next != head)
        {
            cout << currentNode->data << endl;
            currentNode = currentNode->next;
        }
        cout << currentNode->data << endl;
    }
    void deleteNode(int position)
    {
        int i = 0;
        LinkedListNode *tempHead = head;
        if (tempHead == nullptr) // check if linked list is not empty
        {
            cout << "Linked List is empty";
            return;
        }
        LinkedListNode *currentNode = tempHead;
        LinkedListNode *prevNode = nullptr;
        while (currentNode->next != nullptr && i != position) // else -> travel through linked list stop when i = position
        {
            i++;
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
        if (position > i) // if position bigger then linked list size return false
        {
            cout << "Position " << position << " out of range" << endl;
            return;
        }
        else
        {
            // previous node point to null
            prevNode->next = currentNode->next;
            cout << "Node with the value of " << currentNode->data << " has been deleted" << endl;
            delete currentNode;
        }
    }
    void swap(Node **a, Node **b)
    {
        Node *temp = *a;
        *a = *b;
        *b = temp;
    }
};
int main()
{
    LinkedList list;
    list.insertNode(1);
    list.insertNode(3);
    list.insertNode(4);
    list.insertNode(4);
    list.insertNode(7);
    list.insertNode(8);
    list.insertNode(15);
    list.insertNode(18);
    // list.printList();
    // list.quickSort();
    list.printList();
    return 0;
}
