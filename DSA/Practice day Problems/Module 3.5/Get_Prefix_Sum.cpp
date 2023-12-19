#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    std::vector<long long> pre(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i];
    }

    pre[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = v[i] + pre[i - 1];
    }

    std::sort(pre.begin(), pre.end(), std::greater<long long>());
    for (int i = 0; i < n; i++)
    {
        std::cout << pre[i] << " ";
    }

    return 0;
}
