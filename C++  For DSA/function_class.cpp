#include <iostream>

class person
{
public:
    std::string name;
    int age;
    int marks1, marks2;
    person(std::string name, int age, int marks1, int marks2)
    {
        this->name = name;
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
    }
    void hello()
    {
        std::cout << name << " " << age << std::endl;
    }

    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    person rakib("rakib vai", 45, 99, 21);
    rakib.hello();
    std::cout << rakib.total_marks() << std::endl;
    // std::cout << rakib.name << " " << rakib.age << std::endl;
    return 0;
}