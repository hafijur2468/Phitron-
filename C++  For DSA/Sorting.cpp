#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
    std::cin >> a[i];
    }
    /* std::sort(a, a + n);*/                 //! Ascending order.
    std::sort(a, a + n, std::greater<int>()); //! Descending order.
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    return 0;
}