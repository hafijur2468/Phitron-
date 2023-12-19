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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;
    void push(int val)
    {

        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *delnode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else{
            tail->next = NULL;
        }
        delete delnode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st;

    int n;
    std::cin >> n;
    while (n--)
    {
        int x;
        std::cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        std::cout << st.top() << std::endl;
        st.pop();
    }

    return 0;
}