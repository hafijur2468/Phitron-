#include <bits/stdc++.h>

int main()
{
    std::string word;
    std::getline(std::cin, word);

    int count[26] = {0};

    for (int i = 0; i < word.size(); i++)
    {
            count[word[i] - 'a']++;
    }

    int let = 0;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            let++;
        }
    }

    if(let%2==0){
        std::cout << "CHAT WITH HER!"<<std::endl;
    }
    else{
        std::cout << "IGNORE HIM!";
    }

    return 0;
}