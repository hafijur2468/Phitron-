#include <iostream>
#include <algorithm>

int *sort_it(int n)
{
    int *numbers = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::sort(numbers, numbers + n, std::greater<int>());

    return numbers;
}

int main()
{
    int n;
    std::cin >> n;

    int *a = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }

    return 0;
}