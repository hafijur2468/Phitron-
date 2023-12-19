#include <bits/stdc++.h>

int main()
{
    std::stack<int> st;

    std::stack<int> st1;

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
        st1.push(st.top());
        st.pop();
    }

    while (!st1.empty())
    {
        std::cout << st1.top() << " ";
        st1.pop();
    }

    return 0;
}