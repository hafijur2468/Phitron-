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


int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void sameOrNot(Node *head,Node *head1){
    Node *temp1 = head;
    Node *temp2 = head1;
    int flag = 0;

    while(temp1 != NULL || temp2 != NULL){
        if(temp1->val != temp2->val){
            flag = 1;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(flag ==0){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int value;
        std::cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    while (true)
    {
        int value;
        std::cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, value);
    }

    if(size(head) == size(head1)){
        sameOrNot(head, head1);
    }
    else{
        std::cout << "NO";
    }

    return 0;
}