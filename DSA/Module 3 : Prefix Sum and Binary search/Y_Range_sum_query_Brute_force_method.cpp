#include <iostream>

//! brute force method
int main()
{
    int n, q;
    int c, d;
    std::cin >> n >> q;
    int a[n+1];

    for (int i = 1; i <= n; i++)
    {
        std::cin >> a[i];
    }
    int sum = 0;
    for (int j = 0; j < q; j++)
    {
        sum = 0;
        std::cin >> c >> d;
        for (int k = c ; k <= d; k++)
        {
            sum += a[k];
        }

        std::cout << sum << std::endl;
    }
    return 0;
}