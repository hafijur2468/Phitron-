#include <iostream>

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

void print_values(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;

    while (true)
    {
        std::cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    Node *j = head;
    while (j != NULL && j->next != NULL)
    {
        Node *k = j;
        while (k->next != NULL)
        {
            if (j->val == k->next->val)
            {
                Node *dup = k->next;
                k->next = k->next->next;
                delete dup;
            }
            else
            {
                k = k->next;
            }
        }
        j = j->next;
    }

    print_values(head);
    return 0;
}
