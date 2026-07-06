#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

Node *insert(Node *head, int value)
{
    Node *newNode = new Node(value);

    if (head == nullptr)
        return newNode;

    Node *temp = head;

    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;

    return head;
}

void printList(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

Node *mergell(Node *head1, Node *head2, Node *head3)
{
    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;

    Node *temp1, *temp2, *temp3;

    temp1 = head1;
    temp2 = head2;

    if (head1->data <= head2->data)
    {
        head3 = head1;
        temp1 = temp1->next;
    }
    else
    {
        head3 = head2;
        temp2 = temp2->next;
    }

    temp3 = head3;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data <= temp2->data)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
        }
        else
        {
            temp3->next = temp2;
            temp2 = temp2->next;
        }

        temp3 = temp3->next;
    }

    while (temp1 != NULL)
    {
        temp3->next = temp1;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }

    while (temp2 != NULL)
    {
        temp3->next = temp2;
        temp2 = temp2->next;
        temp3 = temp3->next;
    }

    return head3;
}

int main()
{
    Node *head1 = nullptr;
    Node *head2 = nullptr;
    Node *head3 = nullptr;

    int n1, n2;

    cout << "Enter number of nodes in list 1: ";
    cin >> n1;

    cout << "Enter node values for list 1: ";
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        head1 = insert(head1, x);
    }

    cout << "Enter number of nodes in list 2: ";
    cin >> n2;

    cout << "Enter node values for list 2: ";
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        head2 = insert(head2, x);
    }

    cout << "\nLinked List 1:\n";
    printList(head1);

    cout << "\nLinked List 2:\n";
    printList(head2);

    head3 = mergell(head1, head2, head3);

    cout << "\nMerged Linked List:\n";
    printList(head3);

    return 0;
}