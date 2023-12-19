#include <bits/stdc++.h>

int *fun()
{

    int *c = new int;
    std::cout << c << std::endl;
    *c = 1000;
    return c;
}
int main()
{

    int *a = fun();
    std::cout << "main: " << *a << std::endl;

    // int *a = new int;
    // *a = 10;
    // std::cout << *a << std::endl;
    // float *b = new float;
    // *b = 10.2545862;
    // std::cout << *b << std::endl;

    return 0;
}