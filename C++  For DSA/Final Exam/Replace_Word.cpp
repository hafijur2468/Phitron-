#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int testcase;
    std::cin >> testcase;
    std::string word, rmword;

    for (int i = 0; i < testcase; i++)
    {
        std::cin >> word >> rmword;

        int pos = word.find(rmword);

        while ( pos != -1)
        {
            word.replace(pos,rmword.size(), "#");
            pos = word.find(rmword);
        }

        std::cout << word << std ::endl;
    }

    return 0;
}
