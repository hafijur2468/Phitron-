#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::string str;

    int a[6];
    for (int i = 0; i < n; i++)
    {
        std::cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            a[j] = str[j] - '0';
        }

        int count1 = 0;
        int count2 = 0;

        for (int j = 0; j < 3;j++){
            count1 += a[j];
        }

        for (int j = 3; j < 6;j++){
            count2 += a[j];
        }

        if(count1==count2){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}