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

void max_min_diff(Node *head){
    Node *temp = head;

    int max = head->val;
    int  min = head->val;

    while(temp != NULL){
        if(temp->val > max){
            max = temp->val;
        }
        else if(temp->val < min){
            min = temp->val;
        }

        temp = temp->next;
    }

    std::cout << max - min;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        std::cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    max_min_diff(head);
    return 0;
}