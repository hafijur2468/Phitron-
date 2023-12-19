#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) //! O(N) ---- complexity;
    {
        std::cin >> a[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    std::cout << s << std::endl;
    return 0;
}