#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::sort(numbers, numbers + n);
    for (int i = 0; i < n; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    std::sort(numbers, numbers + n, std::greater<int>());

    for (int i = 0; i < n; i++)
    {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
