#include<bits/stdc++.h>

int main(){
    std::stack<int> st;
    int n;
    std::cin >> n;
    while(n--){
        int x;
        std::cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        std::cout << st.top() << " ";
        st.pop();
    }

    return 0;
}