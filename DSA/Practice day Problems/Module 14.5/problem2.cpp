#include <bits/stdc++.h>

int main()
{
    std::stack<int> st;

    std::queue<int> que;

    int n;
    std::cin >> n;
    while (n--)
    {
        int x;
        std::cin >> x;
        st.push(x);
    }

    int m;
    std::cin >> m;
    while (m--)
    {
        int x;
        std::cin >> x;
        que.push(x);
    }

    int flag = 0;

    if (st.size() != que.size())
    {
        std::cout << "NO" << std::endl;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != que.front())
            {
                flag = 1;
                break;
            }
            else
            {
                st.pop();
                que.pop();
            }
        }

        if(flag == 0){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}