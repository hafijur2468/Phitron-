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

void insattail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printing_values(Node *head)
{
    Node *temp = head;

    std::cout << "Your Linked List is: ";

    while (temp != NULL)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main()
{

    Node *head = NULL;
    int n;
    while (true)
    {
        std::cin >> n;
        if (n == -1)
            break;
        insattail(head, n);
    }
    printing_values(head);
    return 0;
}