#include <iostream>

class Node
{
public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};


int main()
{
    Node a(19);
    Node b(23);
    a.next = &b;
    std::cout << a.val << std::endl;
    std::cout << a.next->val<< std::endl; 

    return 0;
}