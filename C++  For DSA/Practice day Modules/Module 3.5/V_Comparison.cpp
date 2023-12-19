#include <iostream>

int main()
{
    int n, m;
    char c;

    std::cin >> n >> c >> m;
    if (c == '<' && n < m)
    {
        std::cout << "Right" << std::endl;
    }
    else if (c == '>' && n > m)
    {
        std::cout << "Right" << std::endl;
    }
    else if (c == '=' && n == m)
    {
        std::cout << "Right" << std::endl;
    }
    else
    {
        std::cout << "Wrong" << std::endl;
    }

    return 0;
}