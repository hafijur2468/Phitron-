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

void printMiddleEl(Node *head, int cnt)
{

    Node *tmp = head;

    if (cnt % 2 == 1)
    {
        int pos = (cnt / 2) + 1;
        for (int i = 1; i <= pos - 2; i++)
        {
            tmp = tmp->next;
        }
        std::cout << tmp->next->val;
    }

    else if (cnt % 2 == 0)
    {
        int pos = (cnt / 2) + 1;
        for (int i = 1; i < pos - 2; i++)
        {
            tmp = tmp->next;
        }
        std::cout << tmp->next->val << " " << tmp->next->next->val;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;

    while (true)
    {
        int val;
        std::cin >> val;
        if (val == -1)
        {
            break;
        }
        count++;

        insert_at_tail(head, tail, val);
    }

    printMiddleEl(head, count);

    return 0;
}