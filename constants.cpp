#include <iostream>

int main()
{
    const int a = 5;

    // let's now use it to define size of array:

    int arr[a] = {1, 2, 3, 4, 5};

    // interestingly, const modifier modifies the whole type
    // so 'int' and 'const int' are two different types entirely

    // constexpr makes it evaluated at compile time

    // This is ok:
    constexpr int b = 1;

    // And this will throw an error as x is not know at compile time:
    
    // int x = 2;
    // constexpr int y = x;
}