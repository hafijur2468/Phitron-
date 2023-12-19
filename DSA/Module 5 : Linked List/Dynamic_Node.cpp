#include <iostream>

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

int main()
{
    // Node head(10);
    Node *head = new Node(500);
    Node *a = new Node(20);

    head->next = a;

    std::cout << head->val << std::endl;
    std::cout << a->val << std::endl;
    std::cout << head->next->val << std::endl;

    return 0;
}