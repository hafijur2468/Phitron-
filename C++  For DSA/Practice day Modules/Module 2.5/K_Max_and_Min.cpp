#include <iostream>
#include <algorithm>

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        std::cin >> a[i];
    }

    auto min = std::min_element(a, a + 3);
    auto max = std::max_element(a, a + 3);

    std::cout << *min << " " << *max << std::endl;
}