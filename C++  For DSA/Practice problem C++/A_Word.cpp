#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;
    int upcount = 0, lowcount = 0;
    for (int i = 0; i <= word.size() - 1;i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            lowcount++;
        }
        else
        {
            upcount++;
        }
    }

    if (upcount > lowcount)
    {
        for (int i = 0; i <= word.size() - 1;i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] = word[i] - 32;
            }
        }
    }

    else if (upcount < lowcount)
    {
        for (int i = 0; i <= word.size() - 1;i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] = word[i] + 32;
            }
        }
    }
    else
    {
        for (int i = 0; i <= word.size() - 1;i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] = word[i] + 32;
            }
        }
    }

    std::cout << word << std::endl;

    return 0;
}