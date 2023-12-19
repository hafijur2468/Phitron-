#include<iostream>

int main(){
    long long n;
    std::cin >> n;
    while (n>0) //!  O(logN) ----- complexity
    {
        int dig = n % 10;
        std::cout << dig<<" ";
        n = n / 10;
    }

    return 0;
}