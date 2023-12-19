#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        std::cin >> n;
        int a[n + 1];

        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }

        int s = INT_MAX;
        int c;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                c = a[i] + a[j] + j - i;
                s = std::min(s, c);
            }
        }
        std::cout << s << std::endl;
    }
    return 0;
}