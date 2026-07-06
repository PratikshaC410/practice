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

Node *reverse(Node *head)
{
    Node *prev = nullptr;
    Node *temp = head;
    Node *front = nullptr;

    while (temp != nullptr)
    {
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
}

int main()
{
    Node *head = nullptr;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values: ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        head = insert(head, x);
    }

    cout << "\nOriginal Linked List:\n";
    printList(head);

    head = reverse(head);

    cout << "\nReversed Linked List:\n";
    printList(head);

    return 0;
}