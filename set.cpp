#include <iostream>
#include <set>

int main()
{
    std::set<int> mySet = {1, 2, 3, 4, 5, 2, 3};
    std::cout << '\n';
    mySet.insert(100);
    mySet.insert(40);
    mySet.insert(100);
    for (auto el : mySet)
    {
        std::cout << el << '\n';
    };
}