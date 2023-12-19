#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    auto maxval = std::max_element(nums, nums + n);

    std::cout << *maxval << std::endl;

    return 0;
}