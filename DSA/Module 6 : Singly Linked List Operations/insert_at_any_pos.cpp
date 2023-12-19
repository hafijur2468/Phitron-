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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL) //! This way tmp reaches the Tail.
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;

    std::cout << "Your Linked List: ";

    while (tmp != NULL)
    {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

void insert_at_pos(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;

    std::cout << "inserted at position " << pos << std::endl;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        std::cout << "Option 1 : Insert at tail" << std::endl;
        std::cout << "Option 2 : print linked list" << std::endl;
        std::cout << "Option 3 : Insert at any position" << std::endl;
        std::cout << "Option 3 : Terminate" << std::endl;

        int op;
        std::cin >> op;
        if (op == 1)
        {
            std::cout << "Insert a value." << std::endl;
            int v;
            std::cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {

            int pos, val;
            std::cout << "Enter Position" << std::endl;
            std::cin >> pos;
            std::cout << "Enter value" << std::endl;
            std::cin >> val;

            insert_at_pos(head, pos, val);
        }
        else if (op == 4)
        {
            break;
        }
    }
    return 0;
}