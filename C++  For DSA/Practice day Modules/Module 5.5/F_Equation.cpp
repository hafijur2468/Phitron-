#include <bits/stdc++.h>

void fun(int n, double m)
{
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum += pow(m, i * 1.0);
    }

    std::cout << sum << std::endl;
}

int main()
{
    int n;
    double m;
    std::cin >> n >> m;
    fun(n, m);
    return 0;
}