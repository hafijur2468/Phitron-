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

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void printing_values(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
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
    int val;

    while (true)
    {
        std::cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int pos, value;
        std::cin >> pos >> value;
        if (pos == 0)
        {
            insert_at_head(head, value);
        }
        else if (pos > size(head))
        {
            std::cout << "Invalid" << std::endl;
            continue;
        }
        else if (pos == size(head))
        {
            insert_at_tail(head, tail, value);
        }
        else
        {
            insert_at_position(head, pos, value);
        }
        printing_values(head);
    }

    return 0;
}