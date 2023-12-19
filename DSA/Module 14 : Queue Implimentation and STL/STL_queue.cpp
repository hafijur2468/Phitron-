#include<bits/stdc++.h>

int main(){
    std::queue<int> q;

    int n;
    std::cin >> n;
    while(n--){
        int x;
        std::cin >> x;
        q.push(x);
    }

    while(!q.empty()){
        std::cout << q.front() << std::endl;
        q.pop();
    }
    return 0;
}