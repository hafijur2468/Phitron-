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

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int val;
        std::cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    while (true)
    {
        int val1;
        std::cin >> val1;
        if (val1 == -1)
            break;
        insert_at_tail(head1, tail1, val1);
    }

    if (size(head) == size(head1))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}