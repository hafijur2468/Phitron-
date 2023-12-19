#include <bits/stdc++.h>

int main()
{

    std::list<int> myl;

    int n;
    while (true)
    {
        std::cin >> n;
        if (n == -1)
            break;
        myl.push_back(n);
    }

    myl.sort();

    myl.unique();

    for (int i : myl)
    {
        std::cout << i << " ";
    }

    return 0;
}