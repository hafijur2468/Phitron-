#include <iostream>
#include <string>
#include <algorithm>

class Student
{
public:
    std::string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(std::string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student rohim("rohim", 1, 'A', 95, 9);
    Student korim("korim", 1, 'C', 90, 9);
    Student joy("joy", 1, 'D', 99, 9);

    int mxmark = std::max({rohim.math_marks, korim.math_marks, joy.math_marks});

    if (mxmark == korim.math_marks)
    {
        std::cout << "Korim got"
                  << " " << mxmark << std::endl;
    }
    else if (mxmark == rohim.math_marks)
    {
        std::cout << "rohim got"
                  << " " << mxmark << std::endl;
    }
    else
    {
        std::cout << "joy got"
                  << " " << mxmark << std::endl;
    }

    return 0;
}