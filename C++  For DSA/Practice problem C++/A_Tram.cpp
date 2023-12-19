#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int getout, getin;

    int current_cap = 0;
    int max_cap = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> getout >> getin;

        current_cap = current_cap - getout + getin;

        max_cap = std::max(max_cap, current_cap);
    }

    std::cout << max_cap;
    return 0;
}