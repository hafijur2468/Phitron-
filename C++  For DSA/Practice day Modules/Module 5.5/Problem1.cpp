#include <iostream>
#include <algorithm>

class Student
{
public:
    std::string name;
    int roll;
    int marks;
};

bool customsort(Student a, Student b)
{
    if (a.marks > b.marks)
    {
        return true;
    }
    else if (a.marks < b.marks)
    {
        return false;
    }
    else
    {
        if (a.roll < b.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    std::sort(a, a + n, customsort);

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i].name << " " << a[i].roll << " " << a[i].marks << std::endl;
    }

    return 0;
}