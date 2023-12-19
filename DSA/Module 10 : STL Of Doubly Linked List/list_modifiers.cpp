#include <bits/stdc++.h>

int main()
{
    std::list<int> myl = {2, 3, 4, 5};
    std::list<int> myl2 = {10,6,7,8};

    // myl.pop_back();
    // myl.push_back(321);
    // myl.pop_front();
    // myl.insert(next(myl.begin(), 3), 100);
    // myl.erase(next(myl.begin(), 2));
    // myl.insert(next(myl.begin(), 3), {100,200,300,400,500});
    myl.insert(next(myl.begin(), 3), myl2.begin(),myl2.end());
    

    for (auto it = myl.begin(); it != myl.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    return 0;
}