#include <iostream>
#include <string>

// declaring a function:

int mysum(int x, int y);

// it's also possible to omit parameter names in declaration:

int myothersum(int, int);

// and here's a basic function definition:

void myvoidfunc(int a)
{
    std::cout << "Here's a parameter that we took: " << a << '\n';
}

// here we actually return something:

int squared(int a)
{
    std::cout << "Returning our param squared \n";
    return a * a;
}

// crazy thing in C++ is passing arguments by reference:

void increasebyref(int &argbyreference)
{
    argbyreference++;
    std::cout << "Here's the new value of our argument: " << argbyreference << '\n';
}

// here's a safe way of passing by reference, by making it a const reference:

void passbyconstref(const int &byconstref)
{
    std::cout << "here's the argument passed by const reference: " << byconstref << '\n';
    // error will be thrown here:
    // byconstref++;
}

// function overloading enables creating multiple function with the same name but with different parameter type:

void myprint(char param);
void myprint(int param);
void myprint(double param);

// when calling the function, a proper overload will be chosen based on parameters

int main()
{
    myvoidfunc(69);
    std::cout << squared(3);

    int d = 9;
    increasebyref(d);
    std::cout << "Here's value of d: " << d << '\n';

    passbyconstref(d);

    myprint('a');
}

void myprint(char param)
{
    std::cout << "Printing a character: " << param << '\n';
}
void myprint(int param)
{
    std::cout << "Printing an integer: " << param << '\n';
}
void myprint(double param)
{
    std::cout << "Printing a double: " << param << '\n';
}

// apparently it is recommended to first declare functions before main,
// and then define them after main, like such:

/*

#include <iostream>
#include <string>

void myfunction(const std::string& byconstreference);

int main()
{
std::string s = "Hello World!";
myfunction(s);
}

void myfunction(const std::string& byconstreference)
{
std::cout << "Arguments passed by const reference: "
<< byconstreference;
}

*/