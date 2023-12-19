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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

int main()
{
    Node *head = NULL;

    int val;
    int cnt = 0;
    while (true)
    {
        std::cin >> val;
        if (val == -1)
            break;
        cnt++;
        insert_at_tail(head, val);
    }

    std::cout << cnt;
    return 0;
}