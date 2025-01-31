#include <iostream>

int main()
{
    // Arrays have to be of objects of the same type. And apparently we also specify the length when declaring it:

    int arr[4];

    int a[5] = {1, 4, 8, 9, 10};

    std::cout << '\n' << "Array elt at index 3 is: " << a[3] << '\n';

    // Now let's change the value of an element:

    a[1] = 69;

    std::cout << "New value of element at index 1 is: " << a[1];
}