#include <iostream>
#include <iomanip>

int main()
{
    int n;
    std::cin >> n;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    double perc = sum / n;

    std::cout << std::fixed << std::setprecision(12) << perc << std::endl;
    return 0;
}