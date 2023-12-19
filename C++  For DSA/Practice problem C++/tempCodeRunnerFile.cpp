#include <bits/stdc++.h>

int main()
{
    int n;
    std::string word;
    std::cin >> word;
    int count[26] = {0};

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] = tolower(word[i]);
            count[word[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {

            std::cout << static_cast<char>('a' + i) << ":" << count[i] << std::endl;
        }
    }

    return 0;
}