#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k, check;
        int flag = 0;

        std::cin >> k >> check;
        int a[k];
        if (k < 3)
        {
            flag = 0;
        }

        for (int j = 0; j < k; j++)
        {
            std::cin >> a[j];
        }

        for (int p = 0; p < k - 2; p++)
        {
            for (int q = p + 1; q < k - 1; q++)
            {
                for (int r = q + 1; r < k; r++)
                {
                    int sum = a[p] + a[q] + a[r];
                    if (sum == check)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if (flag == 1)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}