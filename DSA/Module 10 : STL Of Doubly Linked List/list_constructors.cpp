#include <bits/stdc++.h>

int main()
{
    // std::list<int> mylist; //! Just Creates A list
    // std::list<int> mylist(10); //! Creates a list of size 10;
    // std::list<int> mylist(10, 0); //! Creates a list of size 10 and initialize to 0;
    // std::list<int> mylist1 = {1, 2, 3, 4, 5, 6, 7}; //! creates a list of these values;
    // std::list<int> mylist(mylist1); //! copy from other lisat
    // int a [7] = {1, 2, 3, 4, 5, 6, 7};
    // std::list<int> mylist(a,a+7); //! copy a list from an array
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::list<int> mylist(v.begin(), v.end()); //! takes input from a vector.
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     std::cout << *it << std::endl;
    // }

    //! Range Based For loop.

    for (int val : mylist)
    {
        std::cout << val << std::endl;
    }

    return 0;
}