#include <iostream>
#include <limits>
#include <climits>

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
    std::cin.ignore();
    Student a[n];
    // Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        std::getline(std::cin, a[i].name);
        std::cin >> a[i].roll >> a[i].marks;
        std::cin.ignore();
    }

    Student min;
    min.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < min.marks)
        {
            min = a[i];
        }
    }

    std::cout << min.name << " " << min.roll << " " << min.marks << std::endl;   
    return 0;
}