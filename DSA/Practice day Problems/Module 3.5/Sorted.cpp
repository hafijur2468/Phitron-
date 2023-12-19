#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            std::cin >> v[i];
        }

        std::vector<int> sorted_v(v);

        std::sort(sorted_v.begin(), sorted_v.end());

        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if (v[i] != sorted_v[i])
            {
                flag = 0;
                break;
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
