#include <iostream>
#include <algorithm>

int main()
{
    int n, q;
    std::cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    std::sort(a, a + n);

    while (q--)
    {
        int x;
        std::cin >> x;
        bool flag = false;
        int l = 0;
        int r = n - 1;

        //! binary search;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            if (x > a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (flag == true)
        {
            std::cout << "found" << std::endl;
        }
        else
        {
            std::cout << "not found" << std::endl;
        }
    }
    return 0;
}
