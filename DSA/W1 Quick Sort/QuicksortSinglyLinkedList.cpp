#include <iostream>
using namespace std;

class QuickSortLinkedList
{
    struct Node
    {
        int data;
        Node *next;
        Node *prev;
        Node(int d)
        {
            this->data = d;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    Node *head = NULL;
    Node *tail = NULL;

public:
    void
    addNode(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            head->next = tail;
            head->prev = tail;
            tail->next = NULL;
            return;
        }
        }

    void printList(Node *n)
    {
        while (n != NULL)
        {
            cout << n->data << " ";
            n = n->next;
        }
    }

    Node *partition(Node *start, Node *end)
    {
        if (start == end || start == NULL || end == NULL) // check if the list is empty then exit the function
            return start;

        Node *pos = start;
        Node *curr = start;
        int pivot = end->data; // use last node of the list as a pivot

        // Iterate from start to end node of the list
        while (start != end)
        {
            if (start->data < pivot)
            {
                pos = curr;
                int temp = curr->data;
                curr->data = start->data;
                start->data = temp;
                curr = curr->next;
            }
            start = start->next;
        }

        // curr is the number that bigger then pivot #25 thus swap bigger number to the end
        int temp = curr->data;
        curr->data = pivot;
        end->data = temp;
        return pos;
    }

    void sort(Node *start, Node *end)
    {
        if (start == NULL || start == end) // check if the list is empty then exit the function
            return;

        // split list and partition recurse
        Node *pos = partition(start, end);
        sort(start, pos);

        // If PIVOT = START, we pick from next of PIVOT.
        if (pos != NULL && pos == start)
        {
            sort(pos->next, end);
        }

        // If PIVOT is still in between the list, start from next to pivot since we have pos, so we move two nodes.
        else if (pos != NULL && pos->next != NULL)
        {
            sort(pos->next->next, end);
        }
    }

    void execute()
    {
        cout << "Test 1";
        addNode(10);
        addNode(1);
        addNode(2);
        addNode(8);
        addNode(25);
        addNode(5);
        addNode(18);

        Node *tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        cout << "Linked List before sorting" << endl;
        printList(head);
        // sort(head, tail);
        cout << "\nLinked List after sorting" << endl;
        printList(head);
    }
};

// Main Driver Code
int main()
{
    QuickSortLinkedList list;
    list.execute();
    return 0;
}
