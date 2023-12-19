#include<iostream>

int main(){
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) //! O(N*N) ----complexity N<=10^3;
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "hi" << std::endl;
        }
    }

    return 0;
}