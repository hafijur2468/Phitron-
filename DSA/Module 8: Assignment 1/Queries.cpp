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

void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void delete_head(Node *&head)
{
    Node *deletenode = head;

    if (head == NULL)
    {
        return;
    }

    head = head->next;
    delete deletenode;
}

void delete_at_pos(Node *head, int pos)
{

    Node *temp = head;

    if(head == NULL)
        return;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
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

void print_values(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int t;
    std::cin >> t;
    while (t--)
    {
        int index, value;
        std::cin >> index >> value;
        if (index == 0)
        {
            if (head == NULL)
            {
                insert_at_tail(head, value);
                print_values(head);
            }
            else
            {
                insert_at_head(head, value);
                print_values(head);
            }
        }
        else if (index == 1)
        {
            insert_at_tail(head, value);
            print_values(head);
        }
        else if (index == 2)
        {
            if (value == 0)
            {
                delete_head(head);
                print_values(head);
            }
            else if (value < size(head))
            {
                delete_at_pos(head, value);
                print_values(head);
            }
            else
            {
                print_values(head);
            }
        }
        std::cout << std::endl;
    }
    return 0;
}