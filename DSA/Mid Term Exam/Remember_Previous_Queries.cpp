#include <bits/stdc++.h>

int main()
{

    std::list<int> myl;

    int t;
    std::cin >> t;

    while (t--)
    {
        int pos, val;
        std::cin >> pos >> val;

        if (pos == 0)
        {
            myl.push_front(val);
            std::cout << "L -> ";
            for (int i : myl)
            {
                std::cout << i << " ";
            }
            std::cout << std::endl;
            myl.reverse();
            std::cout << "R -> ";
            for (int i : myl)
            {
                std::cout << i << " ";
            }
            std::cout << std::endl;
            myl.reverse();
        }
        else if (pos == 1)
        {
            myl.push_back(val);
            std::cout << "L -> ";
            for (int i : myl)
            {
                std::cout << i << " ";
            }
            std::cout << std::endl;
            myl.reverse();
            std::cout << "R -> ";
            for (int i : myl)
            {
                std::cout << i << " ";
            }
            std::cout << std::endl;
            myl.reverse();
        }
        else if (pos == 2)
        {
            if (val >=0 && val < myl.size())
            {
                myl.erase(next(myl.begin(),val));
            }
            std::cout << "L -> ";
            for (int i : myl)
            {
                std::cout << i << " ";
            }
            std::cout << std::endl;
            myl.reverse();
            std::cout << "R -> ";
            for (int i : myl)
            {
                std::cout << i << " ";
            }
            std::cout << std::endl;
            myl.reverse();
        }
    }
    return 0;
}