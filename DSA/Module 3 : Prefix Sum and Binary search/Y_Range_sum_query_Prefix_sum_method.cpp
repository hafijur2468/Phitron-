#include <iostream>

//! prefix sum method

int main()
{
    long long n, q;
    std::cin >> n >> q;
    long long a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    long long pre[n];
    pre[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    while (q--)
    {
        long long c, d;
        std::cin >> c >> d;

        c--;
        d--;
        long long sum = 0;

        if (c == 0)
            sum = pre[d];
        else
            sum = pre[d] - pre[c - 1];

        std::cout << sum << std::endl;
    }
    return 0;
}