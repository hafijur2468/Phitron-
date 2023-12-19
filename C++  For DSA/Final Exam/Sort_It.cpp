#include <iostream>
#include <algorithm>

class Student
{
public:
    std::string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cstmcmp(Student a, Student b)
{
    if (a.math_marks + a.eng_marks > b.math_marks + b.eng_marks)
    {
        return true;
    }
    else if (a.math_marks + a.eng_marks < b.math_marks + b.eng_marks)
    {
        return false;
    }
    else
    {
        if (a.id < b.id)
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

    Student info[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> info[i].nm >> info[i].cls >> info[i].s >> info[i].id >> info[i].math_marks >> info[i].eng_marks;
    }

    std::sort(info, info + n, cstmcmp);

    for (int i = 0; i < n; i++)
    {
        std::cout << info[i].nm << " " << info[i].cls << " " << info[i].s << " " << info[i].id << " " << info[i].math_marks << " " << info[i].eng_marks << std::endl;
    }

    return 0;
}