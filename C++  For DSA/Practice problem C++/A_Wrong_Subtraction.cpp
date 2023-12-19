#include <iostream>

int main()
{
    int num, n;

    std::cin >> num >> n;
    for (int i = 1; i <= n; i++)
    {
        if (num % 10 != 0)
        {
            num--;
        }
        else
        {
            num=num/10;
        }
    }
    std::cout << num << std::endl;
    return 0;
}