#include<iostream>
#include<list>

int main(){
    std::list<int> mylist = {20,30,40,10,10,20,50,60,70,80};

    // mylist.remove(10); //! Remove Element;
    // mylist.sort(); //! Sort Asscending;
    // mylist.sort(std::greater<int>()); //! sort Descending;
    // mylist.unique();
    // mylist.reverse();

    // for (int i : mylist)
    // {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    //! Element Access;

    // std::cout << mylist.front() << std::endl;
    std::cout << mylist.back() << std::endl;
    std::cout << *next(mylist.begin(), 5) << std::endl;
    

    return 0;
}