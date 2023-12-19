#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }

    std::vector<int> v(b);

    v.insert(v.end(),a.begin(),a.end());

    for (int i = 0; i < 2*n;i++){
        std::cout << v[i] << " ";
    }

        return 0;
}