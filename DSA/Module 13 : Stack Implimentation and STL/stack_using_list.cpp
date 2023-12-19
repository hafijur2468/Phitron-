#include <bits/stdc++.h>

class myStack
{
public:
    std::list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
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