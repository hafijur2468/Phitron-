#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main()
{
    std::string s;
    std::getline(std::cin, s);
    std::stringstream ss;
    ss << s;

    std::string word;
    while (ss >> word)
    {
        std::sort(word.begin(), word.end(), std::greater());
        std::cout << word << " ";
    }
    std::cout << std::endl;
    return 0;
}