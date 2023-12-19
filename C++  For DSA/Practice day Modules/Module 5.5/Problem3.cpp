#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int count = 0;
    std::string sentence, word;
    std::getline(std::cin, sentence);

    while (sentence.find("john") != -1)
    {
        count++;
        sentence.erase(sentence.find("john"), 4);
    }
    std::cout << count;
    return 0;
}