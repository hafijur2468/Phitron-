#include <iostream>

void fun(int *&p)
{
    *p = NULL;
}

int main()
{

    int val = 10;
    int *ptr = &val;
    fun(ptr);
    std::cout << *ptr << std::endl;

    return 0;
}