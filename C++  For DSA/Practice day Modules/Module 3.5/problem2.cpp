#include <iostream>
#include <string>

class Cricketer
{
public:
    int joursey_no;
    std::string country;
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->joursey_no = 14;
    dhoni->country = "India";

    Cricketer *kohli = new Cricketer;

    kohli->joursey_no = dhoni->joursey_no;
    kohli->country = dhoni->country;

    std::cout << kohli->country << " " << kohli->joursey_no << std::endl;
    delete dhoni;
    std::cout << kohli->country << " " << kohli->joursey_no << std::endl;

    return 0;
}