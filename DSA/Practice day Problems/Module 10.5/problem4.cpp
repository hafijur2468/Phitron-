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

void print_R_to_L(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        std::cout << temp->val << " ";
        temp = temp->prev;
    }
    std::cout << std::endl;
}

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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    std::cin >> t;
    while (t--)
    {
        int x, v;
        std::cin >> x>> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_L_to_R(head);
            print_R_to_L(tail);
        }

        else if (x == size(head))
        {
            insert_at_tail(head, tail, v);
            print_L_to_R(head);
            print_R_to_L(tail);
        }
        else if (x > size(head))
        {
            std::cout << "Invalid" << std::endl;
        }
        else if(x<size(head))
        {
            insert_at_pos(head, x, v);
            print_L_to_R(head);
            print_R_to_L(tail);
        }
    }

    return 0;
}