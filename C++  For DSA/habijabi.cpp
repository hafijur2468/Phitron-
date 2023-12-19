// #include <iostream>

// int main()
// {
//     std::string s2, s1;
//     std::cin >> s1;
//     s2 = "hello world";
//     std::cout << s1.capacity() << std::endl;
//     // s1.clear();
//     s2.resize(5);
//     std::cout << s2 << std::endl;
//     s2.resize(15,'.');
//     std::cout << s2 << std::endl;
//     if (s1.empty() == true)
//     {
//         std::cout << "empty" << std::endl;
//     }
//     else
//     {
//         std::cout << "not empty" << std::endl;
//     }

//     return 0;
// }

#include<iostream>

int main(){
    std::string s("hello", 2);
    std::cout << s << std::endl;
    return 0;
}