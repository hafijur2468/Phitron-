#include <iostream>
#include <sstream>
#include <string>

void print(std::stringstream &ss)
{
    std::string word;
    if (ss >> word)
    {
        print(ss);
        std::cout << word << std::endl;
        }
}

int main()
{
    // std::string s = "djfkjasd;fkd";

    // std::string d("sdfjasdlfkdsfkldhsf");
    // std::string ss("hello");
    // for (int i = 0; i < ss.size(); i++)
    // {
    //     std::cout << ss[i] << std::endl;
    // }

    std::string s;
    std::getline(std::cin, s);
    std::stringstream ss(s);
    std::string word;

    print(ss);

    return 0;
}