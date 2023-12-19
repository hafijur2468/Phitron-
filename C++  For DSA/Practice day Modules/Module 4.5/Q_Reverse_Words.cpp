//! Its an interesting problem.

#include <iostream>
#include <sstream>
#include <algorithm>

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    std::stringstream ss(sentence);

    std::string word;
    bool firstWord = true;

    while (ss >> word)
    {
        std::reverse(word.begin(), word.end());

        if (!firstWord)
        {
            std::cout << " ";
        }
        std::cout << word;
        firstWord = false;
    }
    return 0;
}