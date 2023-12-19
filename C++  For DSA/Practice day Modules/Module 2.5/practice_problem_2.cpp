#include <iostream>

int main()
{
    int n;

    std::cin >> n;
    int *a = new int[n];
    int *b = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        b[i] = a[i];
    }

    delete[] a;

    int m;
    std::cin >> m;

    a = new int[m];

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    delete[] b;

    for (int i = n; i < m; i++)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        std::cout << a[i] << " ";
    }
}