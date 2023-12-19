#include <iostream>
#include <algorithm>

class Student
{
public:
    std::string name;
    int roll;
    char section;
    int marks;
};

int main()
{
    int n;
    std::cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i].name >> a[i].roll >> a[i].section >> a[i].marks;
    }

    int h = 0, k = n - 1;

    while (h < k)
    {
        std::swap(a[h].section, a[k].section);
        h++;
        k--;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout<< a[i].name << " "<< a[i].roll <<" " <<  a[i].section<<" " << a[i].marks<<std::endl;
    }

    return 0;
}