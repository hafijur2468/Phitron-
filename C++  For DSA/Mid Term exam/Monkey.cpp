#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string str;

    while (std::getline(std::cin, str))
    {
        str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
        std::sort(str.begin(), str.end());
        std::cout << str << std::endl;
    }
    return 0;
}