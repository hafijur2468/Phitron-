#include <iostream>
#include <algorithm>

int main()
{

    std::string str1, str2;
    std::cin >> str1 >> str2;

    std::string teststring = str1;
    std::reverse(teststring.begin(), teststring.end());

    if (str2 == teststring)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}