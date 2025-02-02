#include <iostream>

int main()
{
    // for loop

    for (int i = 0; i < 10; i++)
    {
        std::cout << "The counter is: " << i << '\n';
    }

    // while loop

    int a = 0;
    while (a < 10)
    {
        std::cout << "The value of a is: " << a << '\n';
        a++;
    }

    // do while loop

    int b = 0;
    do
    {
        std::cout << "The value of b is: " << b << '\n';
        b++;
    } while (b < 10);
}