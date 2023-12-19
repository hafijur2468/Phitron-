#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::vector<std::string> v(n);
    for (int i = 0; i < n; i++)
    {
        std::getline(std::cin, v[i]);
    }

    for (std::string str : v)
    {
        std::cout << str << " " << std::endl;
    }
    return 0;
}