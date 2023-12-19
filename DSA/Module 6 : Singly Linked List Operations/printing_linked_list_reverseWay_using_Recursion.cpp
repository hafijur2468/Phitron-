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

void print_rec(Node *n){

    if(n==NULL)
        return;
    print_rec(n->next);
    std::cout << n->val << " ";
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int n;
        std::cin >> n;
        if(n == -1)
            break;

        insattail(head,tail, n);
    }

    print_rec(head);
    std::cout << std::endl;

    return 0;
}