//! Dynamic Variable.
// #include <bits/stdc++.h>

// int main()
// {
//     int n;
//     std::cin >> n;
//     int *a = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         std::cout << a[i] << " ";
//     }
//     return 0;
// }

//! Dynamic Array return from function.
// #include <bits/stdc++.h>

// int *fun()
// {
//     int *a = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         std::cin >> a[i];
//     }
//     return a;
// }

// int main()
// {
//     int *a = fun();
//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << a[i] << " ";
//     }

//     return 0;
// }

//! Size increasing of a dynamic array:

#include <bits/stdc++.h>

int main()
{
    int *a = new int[3];
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        std::cin >> a[i];
        b[i] = a[i];
    }

    delete[] a;
    a = new int[5];
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }

    delete[] b;
    a[3] = 5;
    a[4] = 789;

    for (int i = 0; i < 5; i++)
    {
        std::cout << a[i] << " ";
    }
    return 0;
}