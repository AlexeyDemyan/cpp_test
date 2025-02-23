#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> myVec = {1, 2, 100, 4, 5};
    auto it = std::max_element(myVec.begin(), myVec.end());
    std::cout << "the max element is: " << *it << '\n';
}