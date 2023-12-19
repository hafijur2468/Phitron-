#include <bits/stdc++.h>

int main()
{
    std::string sent;
    std::getline(std::cin, sent);

    while (sent.find("EGYPT") != -1)
    {
        sent.replace(sent.find("EGYPT"), 5, " ");
    }

    std::cout << sent << std::endl;
    return 0;
}