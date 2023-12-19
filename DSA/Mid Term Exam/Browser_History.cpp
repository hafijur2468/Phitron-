#include <bits/stdc++.h>

int main()
{
    std::list<std::string> webAddress;
    std::string name;

    while (std::cin >> name)
    {
        if (name == "end")
            break;
        webAddress.push_back(name);
    }

    auto curnt = webAddress.begin();

    int t;
    std::cin >> t;
    while (t--)
    {
        std::string command;
        std::cin >> command;
        if (command == "visit")
        {
            std::string visitingaddress;
            std::cin >> visitingaddress;

            auto it = find(webAddress.begin(), webAddress.end(), visitingaddress);

            if (it != webAddress.end())
            {
                curnt = it;
                std::cout << *curnt << std::endl;
            }
            else
            {
                std::cout << "Not Available" << std::endl;
            }
        }
        else if (command == "next")
        {
            if (next(curnt) != webAddress.end())
            {
                curnt++;
                std::cout << *curnt << std::endl;
            }
            else
            {
                std::cout << "Not Available" << std::endl;
            }
        }
        else if (command == "prev")
        {
            if (curnt != webAddress.begin())
            {
                curnt--;
                std::cout << *curnt << std::endl;
            }
            else
            {
                std::cout << "Not Available" << std::endl;
            }
        }
    }
    return 0;
}