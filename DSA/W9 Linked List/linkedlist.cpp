#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *tail = NULL;
    struct node *head = tail;
    head = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));
    head->data = 43;
    head->link = tail;
    tail->data = 38;
    tail->link = NULL;
    cout << head->data << endl;
    cout << tail->data << endl;
    // cout << head->link << endl;
    // cout << tail->link << endl;
    return 0;
}