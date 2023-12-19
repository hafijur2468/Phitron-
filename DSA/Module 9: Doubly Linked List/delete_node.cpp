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

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void delete_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

void delete_tail(Node *&head,Node *&tail)
{
    Node *deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_head(Node *&head,Node *&tail)
{
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
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

    int pos;
    std::cin >> pos;
    if (pos >= size(head))
    {
        std::cout << "invalid" << std::endl;
    }
    else if (pos == 0)
    {
        delete_head(head,tail);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(head,tail);
    }
    else
    {
        delete_node(head, pos);
    }

    print_L_to_R(head);
    print_R_to_L(tail);

    return 0;
}