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

void hasDuplicateOrNot(Node *head)
{
    Node *dbl = head;
    int flag = 0;
    while (dbl != NULL)
    {
        Node *tmp = dbl->next;
        while (tmp != NULL)
        {
            if (dbl->val == tmp->val)
            {
                flag = 1;
                break;
            }
            tmp = tmp->next;
        }
        if (flag == 1)
        {
            break;
        }
        dbl = dbl->next;
    }

    if (flag == 1)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}

int main()
{
    Node *head = NULL;

    int val;
    while (true)
    {
        std::cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }

    hasDuplicateOrNot(head);

    return 0;
}