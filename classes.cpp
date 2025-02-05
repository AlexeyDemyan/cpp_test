#include <iostream>

class MyFirstClass
{
    char c;
    int x;
    double d;

    void dosomething()
    {
        std::cout << "doing something \n";
    };

    // we can also delcare member function here, and then define it outside the class:
    void dosomethingelse();

    void printx()
    {
        std::cout << "The value of x is: " << x << '\n';
    }
};

// defining function using scope resolution operator:

void MyFirstClass::dosomethingelse()
{
    std::cout << "Doing something else";
}

// default access specifier is private

class MyNormalClass
{
    // this member field is Private by default
    int x;
};

// struct keyword allows to make a class where everything is public:

struct MyFirstStruct
{
    // this member field is Public by default
    int x;
};

// Defining a class with all members having public access:

class MyAllPublicClass
{
public:
    int x;
    void printX()
    {
        std::cout << "Here's x:" << x << '\n';
    }
};

int main()
{
    // hmmm, to create an instance of a class we don't need new, just hekk:
    MyFirstClass a;

    MyAllPublicClass mypub;
    mypub.x = 213;
    mypub.printX();
}