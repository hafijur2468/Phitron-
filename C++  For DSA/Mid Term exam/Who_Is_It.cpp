#include <iostream>

class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_mark;
};

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {

        Student a, b, c;
        std::cin >> a.id >> a.name >> a.section >> a.total_mark;
        std::cin >> b.id >> b.name >> b.section >> b.total_mark;
        std::cin >> c.id >> c.name >> c.section >> c.total_mark;

        if (a.total_mark >= b.total_mark && a.total_mark >= c.total_mark)
        {
            std::cout << a.id << " " << a.name << " " << a.section << " " << a.total_mark << std::endl;
        }
        else if (b.total_mark >= a.total_mark && b.total_mark >= c.total_mark)
        {
            std::cout << b.id << " " << b.name << " " << b.section << " " << b.total_mark << std::endl;
        }
        else
        {
            std::cout << c.id << " " << c.name << " " << c.section << " " << c.total_mark << std::endl;
        }
    }
    return 0;
}