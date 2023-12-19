#include <iostream>
#include<vector>

int main()
{
    std::vector<int> x = {10, 20, 22, 222};
    std::vector<int> a = {5, 6, 7, 3};

    // x.pop_back();

    x.insert(x.begin() + 2, a.begin(),a.end());

    for (int i = 0; i < x.size(); i++)
    {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;

    x.erase(x.begin()+1,x.begin()+3);

    for (int i = 0; i < x.size(); i++)
    {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}