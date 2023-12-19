#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double pi = 3.141592653;
    float r;
    std::cin >> r;
    double area = pi * pow(r, 2);
    std::cout << std::fixed << std::setprecision(9) << area << std::endl;

    return 0;
}