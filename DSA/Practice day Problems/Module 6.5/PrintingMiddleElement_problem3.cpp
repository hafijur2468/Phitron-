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

void print_mid_el(Node *head, int num)
{
    Node *tmp = head;
    int pos = 0;
    if (num % 2 == 1)
    {
        pos = (num / 2) + 1;
        for (int i = 1; i <= pos - 2; i++)
        {
            tmp = tmp->next;
        }
        std::cout << tmp->next->val << std::endl;
    }
    if (num % 2 == 0)
    {
        pos = (num / 2);
        for (int i = 1; i <= pos - 2; i++)
        {
            tmp = tmp->next;
        }
        std::cout << tmp->next->val <<" "<<tmp->next->next->val<< std::endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int cnt = 0;
    while (true)
    {
        std::cin >> val;
        if (val == -1)
            break;
        cnt++;
        insert_at_tail(head, tail, val);
    }
    print_mid_el(head, cnt);
    return 0;
}