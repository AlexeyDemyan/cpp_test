#include <iostream>

class MyDestructorClass
{
public:
    MyDestructorClass() {} // Constructor
    ~MyDestructorClass()   // Destructor. It takes no params
    {
        std::cout << "Destructor invoked \n";
    }
};

class MyBiggerDestClass
{
private:
    int *p;

public:
    MyBiggerDestClass() : p{new int{123}} {}
    ~MyBiggerDestClass()
    {
        delete p;
        std::cout << "Deleted a pointer in the destructor \n";
    }
};

int main()
{
    MyDestructorClass dest;
    // Destructors are invoked when an object goes out of scope
    // or when a pointer to an object is deleted.
    // We should not call the destructor directly.
}