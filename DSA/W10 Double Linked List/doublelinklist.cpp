#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
int main()
{
    struct node *head, *tail = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->data = 43;
    head->pre = NULL;
    head->next = tail;

    tail->data = 38;
    tail->pre = head;
    tail->next = NULL;

    struct node *forward = head;
    while (forward != NULL)
    {
        cout << "data forward: " << forward->data << endl;
        forward = forward->next;
    }

    struct node *backward = tail;

    while (backward != NULL)
    {
        cout << "data backward: " << backward->data << endl;
        backward = backward->pre;
    }
    return 0;
}