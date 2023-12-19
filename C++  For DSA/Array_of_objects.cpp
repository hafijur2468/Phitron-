#include <iostream>

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
    // Student a[n];
    Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        std::getline(std::cin, a[i].name);
        std::cin >> a[i].roll >> a[i].marks;
        std::cin.ignore();
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i].name << " " << a[i].roll << " " << a[i].marks << std::endl;
    }

    return 0;
}