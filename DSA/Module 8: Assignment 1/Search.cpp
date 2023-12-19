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

int fint_value(Node *head, int x)
{
    Node *tmp = head;

    int count = 0;

    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return count;
        }
        tmp = tmp->next;
        count++;
    }
    return -1;
}

int main()
{

    int t;
    std::cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {

            int value;
            std::cin >> value;
            if (value == -1)
            {
                break;
            }
            insert_at_tail(head, tail, value);
        }
        int x;
        std::cin >> x;
        std::cout << fint_value(head, x) << std::endl;
    }

    return 0;
}