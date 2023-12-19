#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k;
        std::cin >> k;
        std::string ch;
        std::cin >> ch;

        int count[26] = {0};

        for (int j = 0; j < k; j++)
        {
            int digit = ch[j] - 'A';
            count[digit]++;
        }
        int numberOfBallons = 0;

        for (int j = 0; j < 26; j++)
        {
            for (int m = 1; m <= count[j]; m++)
            {
                if (m == 1)
                {
                    numberOfBallons += 2;
                }
                else
                {
                    numberOfBallons++;
                }
            }
        }
        std::cout << numberOfBallons << std::endl;
    }
    return 0;
}