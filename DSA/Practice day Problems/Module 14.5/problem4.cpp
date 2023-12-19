#include <bits/stdc++.h>

int main()
{
    std::queue<int> q;
    std::stack<int> st;

    int n;
    std::cin >> n;
    while (n--)
    {
        int x;
        std::cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        std::cout << q.front() << " ";
        q.pop();
    }
    return 0;
}