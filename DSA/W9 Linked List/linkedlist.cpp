#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    // Create pointer to next node
    struct node *tail = NULL;
    struct node *second = NULL;
    struct node *first = NULL;
    struct node *head = NULL;

    // Create node
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    // Show the address of each node
    cout << "head address :" << &head << endl;
    cout << "first address :" << &first << endl;
    cout << "second address :" << &second << endl;
    cout << "tail address :" << &tail << endl;

    head->data = 11;
    head->link = first;
    first->data = 22;
    first->link = second;
    second->data = 33;
    second->link = tail;
    tail->data = 44;
    tail->link = NULL;

    struct node *current = head;
    while (current != NULL)
    {
        cout << "data: " << current->data << endl;
        current = current->link;
    }
    return 0;
}