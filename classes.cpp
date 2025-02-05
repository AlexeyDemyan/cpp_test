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

// Constructor function must have the same name as the class, then it becomes a constructor
// Constructor with no parameters or with default parameters is a Default Constructor
// I'm also noticing that we do not specify a return type for Constructor, since they don't have it
// If a default constructor is not explicitly specified in the code, compiler will generate it

class MyClassWithConstructor
{
public:
    MyClassWithConstructor()
    {
        std::cout << "Default constructor invoked \n";
    }
};

// And here's a class with a constructor that actually does something:

class MyClassWithLessUselessConstructor
{
public:
    int a, b;

    MyClassWithLessUselessConstructor(int aaa, int bbb)
    {
        a = aaa;
        b = bbb;

        std::cout << "Here they are: " << a << " --- " << b << '\n';
    }
};

int main()
{
    // hmmm, to create an instance of a class we don't need new, just hekk:
    MyFirstClass a;

    MyAllPublicClass mypub;
    mypub.x = 213;
    mypub.printX();

    MyClassWithConstructor myclasswconstruct;

    MyClassWithLessUselessConstructor lessuseless(3, 5);

    std::cout << "Let's check value of a in the instance of a class: " << lessuseless.a << '\n';
}