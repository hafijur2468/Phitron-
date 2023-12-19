#include <iostream>

int main()
{
    long long int a, b, sum;
    char c, d;
    std::cin >> a >> c >> b >> d >> sum;
    if (c == '+')
    {
        if (a + b == sum)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << a + b << std::endl;
        }
    }
    else if (c == '-')
    {
        if (a - b == sum)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << a - b << std::endl;
        }
    }
    else
    {
        if (a * b == sum)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << a * b << std::endl;
        }
    }

    return 0;
}