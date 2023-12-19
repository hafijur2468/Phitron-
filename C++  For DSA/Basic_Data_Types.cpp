#include <iostream>
#include <cstdio>
#include <iomanip>

int main()
{
    int a;
    long long b;
    char c;
    float d;
    double e;
    std::cin >> a >> b;
    std::cin >> c;
    std::cin >> d >> e;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << std::fixed << std::setprecision(3) << d << std::endl;
    std::cout << std::fixed << std::setprecision(9) << e << std::endl;

    return 0;
}