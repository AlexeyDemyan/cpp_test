#include <iostream>

int main()
{
    int a = 4;

    switch (a)
    {
    case 1:
        std::cout << "a is 1 \n";
        break;
    case 2:
        std::cout << "a is 2 \n";
        break;
    default:
        std::cout << "a is neither 1 nor 2 \n";
        break;
    }
}