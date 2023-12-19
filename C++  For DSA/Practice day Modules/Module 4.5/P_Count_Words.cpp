//! word counting method that works everywhere. BEST!!

#include <iostream>
#include <sstream>

int main()
{
    std::string sent;
    std::getline(std::cin, sent);

    int count = 0;
    bool found = false;

    for (char c : sent)
    {
        if (isalpha(c))
        {
            if (found == false)
                count++;
            found = true;
        }
        else
        {
            found = false;
        }
    }

    std::cout << count << std::endl;

    return 0;
}