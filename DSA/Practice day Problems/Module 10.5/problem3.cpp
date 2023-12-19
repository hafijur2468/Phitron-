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

void palindrome_or_not(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    int flag = 0;

    while (i != j && i->next != j)
    {
        if (i->val != j->val)
        {
            flag = 1;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if (i->val != j->val)
    {
        flag = 1;
    }

    if (flag == 1)
    {
        std::cout << "NO";
    }
    else
    {
        std::cout << "YES";
    }
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

    palindrome_or_not(head, tail);
    return 0;
}