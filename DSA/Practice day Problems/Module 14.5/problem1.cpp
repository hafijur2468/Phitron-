#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

class mystack
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
    mystack st1;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    mystack st2;

    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    int flag = 0;

    if (st1.size() != st2.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = 1;
                break;
            }
            else
            {
                st1.pop();
                st2.pop();
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}