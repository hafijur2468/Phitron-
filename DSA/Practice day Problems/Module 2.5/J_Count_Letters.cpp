#include<iostream>
#include<vector>

int main(){
    std::string word;
    std::cin >> word;

    std::vector<std::string> v;
    v.push_back(word);

    int count[26] = {0};

    for (int i = 0; i < v[0].size();i++){

        int digit = v[0][i] - 'a';
        count[digit]++;
    }

    for (int i = 0; i < 26;i++){
        if(count[i] !=0){
            std::cout << static_cast<char>(i + 97) << " : " << count[i] << std::endl;
        }
    }

        return 0;
}