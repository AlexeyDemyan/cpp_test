#include <iostream>

int main()
{
    // automatic type deduction using auto

    auto a = 'A';

    // also can be done based on expression

    auto b = 123.10 / 5.50;

    // auto can be used as reference type

    int c = 456;
    auto& d = c;

    // auto can be used as part of const type

    const auto e = 1111;
}