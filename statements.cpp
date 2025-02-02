#include <iostream>

int main()
{
    // if statements can be shorthanded:

    bool b = true;
    if (b)
        std::cout << "the condition is true" << '\n';

    // using block scope to execute multiple statements

    if (b)
    {
        std::cout << "here's the first statement \n";
        std::cout << "and here's the second one \n";
    }

    // and here's shorthanded if else

    bool c = false;
    if (c) std::cout << "Condition is true \n";
    else std::cout << "Condition is false \n";

    // a ternary operator is called Conditional Expression in C++

    bool mycond = false;
    int x = 0;
    x = (mycond) ? 1 : 0;
    std::cout << "The value of x is " << x << '\n';
}