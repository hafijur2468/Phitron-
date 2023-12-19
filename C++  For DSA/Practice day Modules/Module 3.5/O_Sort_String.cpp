#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::string word;
    std::cin >> word;

    std::sort(word.begin(), word.end());
    std::cout << word << std::endl;
    return 0;
}