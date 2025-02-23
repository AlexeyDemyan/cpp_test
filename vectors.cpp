#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myVec = {1, 2, 3, 4, 5};
    auto it = myVec.begin() + 3;
    std::cout << "Let me check the sizes... \n";
    std::cout << myVec.size() << '\n';
    myVec.erase(it);
    std::cout << myVec.size() << '\n';
    for (auto el : myVec)
    {
        std::cout << el << '\n';
    }
}