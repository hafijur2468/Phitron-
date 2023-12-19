#include <iostream>

void res(int n)
{

    if (n == 1)
    {
        std::cout << "one" << std::endl;
    }
    else if (n == 2)
    {
        std::cout << "two" << std::endl;
    }
    else if (n == 3)
    {
        std::cout << "three" << std::endl;
    }
    else if (n == 4)
    {
        std::cout << "four" << std::endl;
    }
    else if (n == 5)
    {
        std::cout << "five" << std::endl;
    }
    else if (n == 6)
    {
        std::cout << "six" << std::endl;
    }
    else if (n == 7)
    {
        std::cout << "seven" << std::endl;
    }
    else if (n == 8)
    {
        std::cout << "eight" << std::endl;
    }
    else if (n == 9)
    {
        std::cout << "nine" << std::endl;
    }
    else
    {
        (n % 2 == 0) ? std::cout << "even" << std::endl : std::cout << "odd" << std::endl;
    }
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    if (n < m)
    {
        for (int i = n; i <= m; i++)
        {
            res(i);
        }
    }
    if (m < n)
    {
        for (int i = m; i <= n; i++)
        {
            res(i);
        }
    }
    return 0;
}