#include <iostream>

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(29);
    Node *b = new Node(44);
    Node *c = new Node(50);
    Node *d = new Node(79);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node *temp = head;

    // while (head != NULL) //! In this process Head Disappears.
    // {                        //! So dont use.
    //     std::cout << head->val << std::endl;
    //     head = head->next;
    // }

    while (temp != NULL)
    {
        std::cout << temp->val << std::endl;
        temp = temp->next;
    }
    return 0;
}