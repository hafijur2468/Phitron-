#include <iostream>
#include <sstream>

int main()
{
    std::string names;
    std::getline(std::cin, names);

    std::stringstream ss(names);

    std::string word;
    int flag = 0;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}