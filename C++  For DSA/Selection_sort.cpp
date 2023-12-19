#include <iostream>
#include <limits>
#include <climits>
#include<algorithm>

class Student
{
public:
    std::string name;
    int roll;
    int marks;
};

bool cmp(Student a,Student b){
    return a.marks >= b.marks;
}

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();
    Student a[n];
    // Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        std::getline(std::cin, a[i].name);
        std::cin >> a[i].roll >> a[i].marks;
        std::cin.ignore();
    }

    std::sort(a, a + n,cmp);

    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (a[i].marks > a[j].marks)
    //         {
    //             std::swap(a[i], a[j]);
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i].name << " " << a[i].roll << " " << a[i].marks << std::endl;
    }

    return 0;
}