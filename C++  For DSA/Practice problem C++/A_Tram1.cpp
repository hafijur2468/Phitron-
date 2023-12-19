#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int getout[n], getin[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> getout[i] >> getin[i];
    }

    int remain[n], total[n] = {0};

    for (int i = 0; i < n - 1; i++)
    {
        remain[i] = getin[i] - getout[i + 1];
        total[i + 1] = remain[i] + getin[i + 1];
    }
    int mx = 0;

    for (int i = 1; i < n - 1; i++)
    {
        // std::cout << total[i] << std::endl;
        mx = std::max(mx, total[i]);
    }

    std::cout << mx << std::endl;
    return 0;
}