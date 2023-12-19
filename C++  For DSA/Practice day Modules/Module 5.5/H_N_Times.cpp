#include <iostream>

void fun(int a, char c)
{
    for (int i = 0; i < a; i++)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        char c;
        std::cin >> a >> c;
        fun(a, c);
    }
    return 0;
}