#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void insertNode(int){

};

int main()
{
    // Create pointer to next node
    struct node *head, *second, *third, *forth, *tail = NULL;
    yu
        // Create node
        head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->data = 35;
    head->link = second;
    second->data = 43;
    second->link = third;
    third->data = 19;
    third->link = forth;
    forth->data = 65;
    forth->link = tail;
    tail->data = 38;
    tail->link = NULL;

    struct node *current = head;
    while (current != NULL)
    {
        cout << "data: " << current->data << endl;
        current = current->link;
    }
    return 0;
}