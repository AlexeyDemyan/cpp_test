#include <iostream>

int main()
{
    // References are essentially aliases to existing objects in memory

    int x = 123;
    int& y = x;

    // Now y and x essentially refer to the same int object in memory
    // Let's use one of them to change the object in memory

    y = 456;

    std::cout << '\n' << "x used to be 123, but now it's: " << x << '\n';

    // What we can do is use const, which is a readonly alias:

    int a = 888;
    const int& b = a;

    // Trying to re-assign b will give an error already in editor
}