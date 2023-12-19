#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i];
    }

    std::reverse(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        std::cout << v[i] << " ";
    }

    return 0;
}