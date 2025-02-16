#include <iostream>

void somefunc()
{
    // a static object is singular and memory is allocated the first time it's encountered,
    // and deallocated when the program ends
    static int x = 0;
    x++;
    std::cout << "Function ran: " << x << " times \n";
};

class MyStatClass
{
public:
    // static class member fiels will not be a part of an object
    static int x; // declaring it

    // we can do the same for member functions:
    static void myStatFunc(); // declaring it without curly bracers
};

int MyStatClass::x = 123; // defining it
void MyStatClass::myStatFunc()
{
    std::cout << "This message comes from definition of the static member function \n";
};

int main()
{
    somefunc();
    somefunc();
    somefunc();
    // So the value of the x variable is preserved throughout function calls
    // It doesn't get initialized to zero with every function call, only the first time
    // It should be a more convenient alternative to a global variable
    MyStatClass::x = 456; // changing the value of static member field
    std::cout << "Here's a static x from the Class: " << MyStatClass::x << '\n';
    MyStatClass::x = 999; // changing it again
    std::cout << "And here it is again: " << MyStatClass::x << '\n';

    MyStatClass::myStatFunc();
}