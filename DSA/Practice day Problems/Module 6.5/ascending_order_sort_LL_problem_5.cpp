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

void sorted_or_not(Node *head)
{

    Node *temp = head;
    int flag = 0;

    while (temp->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            flag = 1;
        }
        temp = temp->next;
    }
    if(flag == 1){
        std::cout << "NO" << std::endl;
    }
    else{
        std::cout << "YES" << std::endl;
    }
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

    sorted_or_not(head);
    return 0;
}