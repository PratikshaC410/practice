/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution
{
public:
    Node *flatten(Node *head)
    {
        Node *curr = head;
        while (curr != NULL)
        {
            if (curr->child != NULL)
            {
                Node *next = curr->next;
                Node *child_node = curr->child;
                while (child_node->next != NULL)
                {
                    child_node = child_node->next;
                }
                child_node->next = next;
                if (next != NULL)
                {
                    next->prev = child_node;
                }

                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = NULL;
            }
            curr = curr->next;
        }
        return head;
    }
};