#include <iostream>
#include <vector>

int main()
{
    // std::vector<int> v; //! type 1
    // std::vector<int> v(5); //! type 2
    // std::vector<int> v(5,3); //! type 3

    // std::vector<int> v2(5, 80);
    // std::vector<int> v(v2); //! type 4

    // int a[6] = { 1, 2, 3, 4, 5, 6};
    // std::vector<int> v(a, a + 6); //!type 5

    std::vector<int> v = {1, 2, 3,4,5,6,7,7,7,7,77,7777,7};

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    v.push_back(78);

    v.resize(2);
    v.resize(7,67);

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}