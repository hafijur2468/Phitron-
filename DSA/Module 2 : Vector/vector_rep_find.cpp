#include <bits/stdc++.h>

int main()
{
    // std::vector<int> v = {1, 2, 3, 2, 3, 4, 5, 6, 7, 8, 2, 2, 2};
    // replace(v.begin(), v.end() - 1, 2, 12);
    // for(int x:v){
    //     std::cout << x << " ";
    // }

    // auto it = find(v.begin(), v.end(), 1);
    // if (it == v.end())
    //     std::cout << "Found" << std::endl;
    // else
    //     std::cout << "Not Found" << std::endl;

    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     std::cout <<*it<<" ";
    // }
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n;i++){
        std::cin >> v[i];
    }

    for (int i = 0; i < n;i++){
        std::cout<< v[i]<<" ";
    }

        return 0;
}