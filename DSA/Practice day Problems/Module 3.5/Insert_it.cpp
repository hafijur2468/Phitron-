#include <iostream>
#include <vector>
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    int m;
    std::cin >> m;
    std::vector<int> b(m);

    for (int i = 0; i < m; i++)
    {
        std::cin >> b[i];
    }

    int x;
    std::cin >> x;

    a.insert(a.begin() + x, b.begin(), b.end());

    for (int i = 0; i < (n + m); i++)
    {
        std::cout << a[i] << " ";
    }
    return 0;
}
