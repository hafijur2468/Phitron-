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

void insert_at_pos(Node *head, int pos, int v)
{

    Node *newNode = new Node(v);

    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void delete_on_pos(Node *head,int pos){

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        std::cout << "Option 1: insert at tail: " << std::endl;
        std::cout << "Option 2: print. " << std::endl;
        std::cout << "Option 3: insert at any position: " << std::endl;
        std::cout << "Option 4: insert at Head: " << std::endl;
        std::cout << "Option 5: delete pos : " << std::endl;
        std::cout << "Option 6: Terminate. " << std::endl;
        int op;
        std::cin >> op;

        if (op == 1)
        {
            std::cout << "Enter a value." << std::endl;
            int val;
            std::cin >> val;

            insattail(head, val);
        }
        else if (op == 2)
        {
            printing_values(head);
        }
        else if (op == 3)
        {
            std::cout << "Enter Position: ";
            int pos, val;
            std::cin >> pos;
            std::cout << "Enter a value: ";
            std::cin >> val;

            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_pos(head, pos, val);
            }
        }
        else if (op == 4)
        {
            int v;
            std::cout << "Enter a value: " << std::endl;
            std::cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            std::cout << "Enter a pos: ";
            std::cin >> pos;
            delete_on_pos(head, pos);
        }
    }

    return 0;
}