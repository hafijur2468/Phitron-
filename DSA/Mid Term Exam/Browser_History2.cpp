#include <bits/stdc++.h>

class Node
{
public:
    std::string val;
    Node *next;
    Node *prev;

    Node(std::string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, std::string val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void print_L_to_R(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void processQueries(Node *&current, std::list<std::string> &s)
{

    for (std::string d : s)
    {
        Node *temp = current;
        if (d.substr(0, 5) == "visit")
        {
            std::string addressName = d.substr(6);
            while (temp != NULL)
            {
                if (temp->val == addressName)
                {
                    current = temp;
                    std::cout << current->val << std::endl;
                    break;
                }
                temp = temp->next;
            }
            if (temp == NULL)
            {
                std::cout << "Not Available" << std::endl;
            }
        }
        else if (d == "next")
        {
            if (current->next != NULL)
            {
                current = current->next;
                std::cout << current->val << std::endl;
            }
            else
            {
                std::cout << "Not Available" << std::endl;
            }
        }
        else if (d == "prev")
        {
            if (current->prev != NULL)
            {
                current = current->prev;
                std::cout << current->val << std::endl;
            }
            else
            {
                std::cout << "Not Available" << std::endl;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    std::string v;
    while (true)
    {
        std::cin >> v;
        if (v == "end")
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }

    Node *current = head;
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::list<std::string> s;

    while (n--)
    {
        std::string query;
        std::getline(std::cin, query);
        s.push_back(query);
    }

    processQueries(current, s);

    return 0;
}