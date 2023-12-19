#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    int flag = 0;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            flag = 1;
        }
        i++;
        j--;
    }

    if (flag == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}