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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void sortlist(Node *head){
    Node *i, *j;
    for (i = head; i != NULL;i = i->next){
        for (j = i->next; j != NULL;j= j->next){
            if(i->val >j->val){
                std::swap(i->val, j->val);
            }
        }
    }
}

void print_L_to_R(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int v;
    while (true)
    {
        std::cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }
    sortlist(head);
    print_L_to_R(head);

    return 0;
}