#include <iostream>

int main()
{
    // dynamically allocating and deallocating storage:

    int *p = new int;
    *p = 123;
    std::cout << "The pointed-to value is: " << *p << '\n';
    delete p;

    // allocating memory for an array:
    // here we can dereference a pointer by simply using []:
    // the thing here is that pointer actually points to the first element in the memory

    int *a = new int[3];
    a[0] = 10;
    a[1] = 23;
    a[2] = 44;

    std::cout << "The value of second element is : " << a[1] << '\n';
    delete[] p;
}