#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "I ";
        if (i % 2 == 0)
        {
            std::cout << "hate ";
        }
        else
        {
            std::cout << "love ";
        }

        if (i + 1 < n)
        {
            std::cout << "that ";
        }
        else
        {
            std::cout << "it ";
        }
    }

    return 0;
}