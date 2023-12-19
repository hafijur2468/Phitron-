#include <iostream>

int main()
{
    std::string a = "Hello";
    std::string b = "world";
    // a += b;
    a.append(b);

    a.push_back('j');
    a.pop_back();
    // a.push_back('c');
    // a.pop_back();
    // a.pop_back();

    // a.assign("gelo");
    a.erase(2,1);

    std::cout << a << std::endl;
   // a.erase(4,3);
    // std::cout << a << std::endl;
    a.insert(5, "hafiz");

    std::cout << a << std::endl;

    for (auto it = a.begin(); it < a.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}
