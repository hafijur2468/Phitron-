#include <iostream>
#include <algorithm>

class Student
{
public:
    std::string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    std::cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << a[i].name << " " << a[i].roll << " " << a[i].marks << std::endl;
    }

    return 0;
}