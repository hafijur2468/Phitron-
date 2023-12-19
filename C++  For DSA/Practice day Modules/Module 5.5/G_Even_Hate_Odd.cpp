#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        int d[a];
        int even = 0, odd = 0;
        for (int j = 0; j < a; j++)
        {
            std::cin >> d[j];
            d[j] % 2 == 0 ? even++ : odd++;
        }
        int op = std::max(even, odd) - (a / 2);

        if (a % 2 == 1)
        {
            std::cout << -1 << std::endl;
            continue;
        }
        else
        {
            std::cout << abs(op) << std::endl;
        }
    }
    return 0;
}