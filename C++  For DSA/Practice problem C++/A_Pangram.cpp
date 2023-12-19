#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string word;
    std::getline(std::cin, word);

    int count[26] = {0};

    for (int i = 0; i < word.size(); i++)
    {
        if (std::isalpha(word[i]))
        {
            word[i] = std::tolower(word[i]);
            count[word[i] - 'a']++;
        }
    }

    int flag = 1;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            flag = 0;
        }
    }

    if(flag ==1){
        std::cout << "YES" << std::endl;
    }
    else{
        std::cout << "NO" << std::endl;
    }

    return 0;
}