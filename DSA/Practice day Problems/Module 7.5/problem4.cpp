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

void maxFind(Node *head,int cnt){

    Node *tmp = head;
    int max = INT_MIN;
    for (int i = 1; i <= cnt;i++){
        if(tmp->val >max){
            max = tmp->val;
        }
        tmp = tmp->next;
    }

    std::cout << max;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;

    while (true)
    {
        int val;
        std::cin >> val;
        if (val == -1)
        {
            break;
        }
        count++;

        insert_at_tail(head, tail, val);
    }
    maxFind(head, count);
    return 0;
}