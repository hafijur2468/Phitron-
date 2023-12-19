#include <bits/stdc++.h>

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_L_to_R(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

void print_R_to_L(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        std::cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    std::cout << std::endl;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    Node *tail = b;

    //! Connections:
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    print_L_to_R(head);
    print_R_to_L(tail);

    return 0;
}