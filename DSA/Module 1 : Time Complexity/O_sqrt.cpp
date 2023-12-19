#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;
    for (int i = 1; i <= sqrt(n); i++)  //!O(sqrtN) ---complexity
    {
        if (n % i == 0)
        {
            std::cout << i << " " << n / i << std::endl;
        }
    }


    for (int i = 1; i*i <= n; i++)  //!O(sqrtN) ---complexity
    {
        if (n % i == 0)
        {
            std::cout << i << " " << n / i << std::endl;
        }
    }
    return 0;
}