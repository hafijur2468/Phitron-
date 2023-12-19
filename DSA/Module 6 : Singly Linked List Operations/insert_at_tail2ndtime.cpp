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

/*
void insattail(Node *&head, int v)
{ //! ref er jonno main er pointer change hoi.
    Node *newNode = new Node(v);
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
*/

void insattail(Node *&head, Node *&tail, int v) //! A better way to Insert at Tail with Complexity O(n)
{                                               //! ref er jonno main er pointer change hoi.
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printing_values(Node *head)
{
    Node *tmp = head;

    std::cout << "Your Linked List is: ";
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

    while (true)
    {
        std::cout << "Option 1: insert at tail: " << std::endl;
        std::cout << "Option 2: print. " << std::endl;
        std::cout << "Option 3: Terminate. " << std::endl;
        int op;
        std::cin >> op;

        if (op == 1)
        {

            std::cout << "Enter a value." << std::endl;
            int val;
            std::cin >> val;

            insattail(head, tail, val);
        }
        else if (op == 2)
        {
            printing_values(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}
