#include<iostream>

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


int main(){
    Node *head = new Node(10);
    Node *a = new Node(29);
    Node *b = new Node(44);
    Node *c = new Node(50);
    Node *d = new Node(79);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    std::cout << head->val << std::endl;
    std::cout << head->next->val << std::endl;
    std::cout << head->next->next->val << std::endl;
    std::cout << head->next->next->next->val << std::endl;
    std::cout << head->next->next->next->next->val << std::endl;


    return 0;
}