#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            v[i] = 1;
        }
        else if (v[i] < 0)
        {
            v[i] = 2;
        }
    }

    for (int i = 0; i < n;i++){
        std::cout << v[i]<<" ";
    }

        return 0;
}