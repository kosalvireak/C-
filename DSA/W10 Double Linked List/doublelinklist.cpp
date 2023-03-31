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
    struct node *head, *second, *third, *forth, *tail = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->data = 43;
    head->pre = NULL;
    head->next = second;

    second->data = 43;
    second->pre = head;
    second->next = third;

    third->data = 19;
    third->pre = second;
    third->next = forth;

    forth->data = 65;
    forth->pre = third;
    forth->next = tail;

    tail->data = 38;
    tail->pre = forth;
    tail->next = NULL;

    struct node *forward = head;
    cout << "data forward: ";
    while (forward != NULL)
    {
        cout << forward->data << " ";
        forward = forward->next;
    }

    struct node *backward = tail;
    cout << "\ndata backward: ";
    while (backward != NULL)
    {
        cout << backward->data << " ";
        backward = backward->pre;
    }
    return 0;
}