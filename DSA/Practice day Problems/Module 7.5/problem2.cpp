#include <bits/stdc++.h>

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

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void printInReverse(Node *h)
{
    if (h == NULL)
        return;

    printInReverse(h->next);
    std::cout << h->val << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        std::cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    printInReverse(head);
    return 0;
}