#include <bits/stdc++.h>

int main()
{
    char c;
    std::cin >> c;
    if (c >= '0' && c <= '9')
    {
        std::cout << "IS DIGIT" << std::endl;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        std::cout << "ALPHA\nIS CAPITAL" << std::endl;
    }
    else
    {
        std::cout << "ALPHA\nIS SMALL" << std::endl;
    }

    return 0;
}