#include <iostream>

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b;

    a.val = 10;
    b.val = 20;

    a.next = &b;
    b.next = NULL;

    std::cout << a.val << std::endl;
    std::cout << a.next->val<< std::endl; 

    return 0;
}