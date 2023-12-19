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

// void print_L_to_R(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         std::cout << temp->val << " ";
//         temp = temp->next;
//     }
//     std::cout << std::endl;
// }

// void print_R_to_L(Node *tail)
// {
//     Node *temp = tail;
//     while (temp != NULL)
//     {
//         std::cout << temp->val << " ";
//         temp = temp->prev;
//     }
//     std::cout << std::endl;
// }

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

void same_or_not(Node *head, Node *head1)
{
    Node *tmp1 = head;
    Node *tmp2 = head1;

    int flag = 0;

    while (tmp1 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = 1;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if (flag == 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *head1 = NULL;
    Node *tail1 = NULL;

    int v;
    while (true)
    {
        std::cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }

    while (true)
    {
        std::cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, v);
    }

    if (size(head) != size(head1))
    {
        std::cout << "NO" << std::endl;
    }
    else
    {
        same_or_not(head, head1);
    }

    return 0;
}