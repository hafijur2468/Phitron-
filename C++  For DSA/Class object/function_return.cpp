#include <iostream>

//! return of a function And creating dynamic object in this program.
//* Much Important topic

class Student
{

public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fn()
{
    Student *rohim = new Student(342, 5, 4.99);
    return rohim;
}
int main()
{
    Student *ans = fn();

    std::cout << ans->roll << " " << ans->cls << " " << ans->gpa << std::endl;

    delete ans;

    return 0;
}