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

void print_L_to_R(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

void print_R_to_L(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        std::cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    std::cout << std::endl;
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    std::cin >> t;
    while (t--)
    {
        int v, x;
        std::cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            std::cout << "L -> ";
            print_L_to_R(head);
            std::cout << "R -> ";
            print_R_to_L(tail);

        }
        else if (x == size(head))
        {
            insert_at_tail(head, tail, v);
            std::cout << "L -> ";
            print_L_to_R(head);
            std::cout << "R -> ";
            print_R_to_L(tail);
        }

        else if (x < 0 || x > size(head))
        {
            std::cout << "Invalid" << std::endl;
        }
        else
        {
            insert_at_position(head, x, v);
            std::cout << "L -> ";
            print_L_to_R(head);
            std::cout << "R -> ";
            print_R_to_L(tail);
        }
    }
    return 0;
}