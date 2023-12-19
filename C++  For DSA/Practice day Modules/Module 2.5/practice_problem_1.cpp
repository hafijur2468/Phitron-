#include <iostream>

int *get_array(int n)
{

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    return a;
}

int main()
{

    int n;
    std::cin >> n;

    int *a = get_array(n);

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }

    return 0;
}