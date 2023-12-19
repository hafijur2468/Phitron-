#include <iostream>
#include <list>
#include <vector>

class myStack
{
public:
    std::vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
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