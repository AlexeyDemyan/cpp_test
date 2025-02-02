#include <iostream>

int main()
{
    // logical AND:

    bool a = true;
    bool b = true;

    if (a && b)
    {
        std::cout << "Both conditions are true \n";
    }
    else
    {
        std::cout << "At least one condition is false \n";
    }

    // logical OR:

    bool c = false;
    bool d = false;
    bool e = true;

    if (c || d || e)
    {
        std::cout << "At least one condition is true \n";
    }
    else
    {
        std::cout << "All conditions are false \n";
    }

    // negation operator:

    bool f = true;
    if (!f)
    {
        std::cout << "original condition is falsy \n";
    }
    else
    {
        std::cout << "original condition is true \n";
    }

    // comparison operators are the usual <, <=, ==, !=

    int g = 5;
    if (g == 5)
    {
        std::cout << "g is equal to 5 \n";
    }

    if (g >= 0 && g <= 10)
    {
        std::cout << "g is between zero and 10 \n";
    }
    else
    {
        std::cout << "g is not within the specified range \n";
    }

    // any literal, object or expression that can be implicitly converted to boolean,
    // can be used as a condition (duh-doy..)

    if (1)
    {
        std::cout << "Unsurprisingly, 1 is a true value \n";
    }

    // with integers, zero is false and all rest is true

    if (-1) {
        std::cout << "int value of -1 is truthy \n";
    }
}