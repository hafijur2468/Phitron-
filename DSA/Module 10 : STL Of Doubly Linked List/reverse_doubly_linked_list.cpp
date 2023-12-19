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

void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        std::swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    std::swap(i->val, j->val);
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    Node *tail = c;

    //! Connections:
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    print_L_to_R(head);
    reverse(head, tail);
    print_L_to_R(head);

    return 0;
}