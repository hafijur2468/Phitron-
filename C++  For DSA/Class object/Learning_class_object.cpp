#include <iostream>
#include <cstring>

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
    long long reg;

    Student(int r, double cg, long long re)
    {
        roll = r;
        cgpa = cg;
        reg = re;
    }
};

int main()
{
    Student joy(57, 2.65, 2019218359);

    std::cin.getline(joy.name, 100);
    std::cout << joy.name << " " << joy.roll << " " << joy.cgpa << " " << joy.reg << std::endl;

    return 0;
}
