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
class LinkedList
{
public:
    LinkedListNode *head;
    LinkedList()
    {
        this->head = nullptr;
    }
    void insertNode(int data) // insert at the end of list
    {
        LinkedListNode *newNode = new LinkedListNode(data);
        if (head == nullptr) // check if there is no node assign head to node
        {
            head = newNode;
            return;
        }
        LinkedListNode *current = head;
        while (current->next != nullptr) // travel to find the last node
        {
            current = current->next;
        }
        current->next = newNode; // last node point to new node
    }
    void printList()
    {
        LinkedListNode *currentNode = head;
        while (currentNode->next != nullptr)
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
            // return;
            cout << "Linked List is empty";
            return;
        }
        LinkedListNode *currentNode = tempHead;
        LinkedListNode *prevNode = nullptr;
        while (currentNode->next != nullptr && i != position) // else -> travel through linked list stop when i = position
        {

            i++;
            // cout << "currentNode->data" << currentNode->data << endl;
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
        if (position > i) // if position bigger then linked list size return false
        {
            cout << "Position out of range" << endl;
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
};
int main()
{
    LinkedList list;
    list.insertNode(01);
    list.insertNode(11);
    list.insertNode(21);
    list.insertNode(31);
    list.printList();
    list.deleteNode(0);
    list.printList();
    return 0;
}
