#include <iostream>
#include <string>

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

// Here's something I've never seen before - member initializer list to assign values more elegantly:

class MyElegantClass
{
public:
    int a, b;

    MyElegantClass(int aaa, int bbb)
        //  here I am using both types of brackets to see that there is no difference:
        : a(aaa), b{bbb}
    {
        std::cout << "normal constructor invoked \n";
    }

    MyElegantClass(const MyElegantClass &rhs) : a{rhs.a}, b{rhs.b}
    {
        std::cout << "user-defined copy constructor invoked with these values: " << a << " -- " << b << '\n';
    }
};

// In default copy constructor we must create deep copies of members
// Ghax for some member types the normal copy does not copy correctly

class MyDeepCopyClass
{
private:
    int x;
    int *p;

public:
    MyDeepCopyClass(int xx, int pp) : x{xx}, p{new int{pp}}
    {
    }
    MyDeepCopyClass(const MyDeepCopyClass &rhs) : x{rhs.x}, p{new int{*rhs.p}}
    {
        std::cout << "User defined copy constructo invoked \n";
    }
};

// There is also a crazy thing called Copy Constructor,
// Where you can initialize an object with another object of the same class;

// I'm using normal brackets as opposed to curly ones, but looks to give the same result

// It's also possible to first create and objec, and the copy-assign it:
// MyClass copyfrom;
// MyClass copyto;
// copyto = copyfrom;

// And here's a user-defined copy assignment operator:

class MyCopyAssClass
{
public:
    MyCopyAssClass &operator=(const MyCopyAssClass &rhs)
    {
        // implementing copy logic here
        return *this;
    }
};

class MyMoveClass
{
    // Compiler will provide a generated move constructor in case it's missing
private:
    int x;
    std::string s;

public:
    // making user-provided constructor:
    MyMoveClass(int xx, std::string ss) : x{xx}, s{ss} {}
    MyMoveClass(MyMoveClass &&rhs) : x{std::move(rhs.x)}, s{std::move(rhs.s)}
    {
        std::cout << "Move contructor invoked \n";
    }
    // Let me try creating move assignment operator:
    MyMoveClass &operator=(MyMoveClass &&otherobject)
    {
        std::cout << "Invoking move assignment operator \n";
        x = std::move(otherobject.x);
        s = std::move(otherobject.s);
        return *this;
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

    MyElegantClass eleg{7, 8};

    std::cout << "Here are the values assigned by the constructor: " << eleg.a << " -- " << eleg.b << '\n';

    // Doing a copy constructor:

    MyElegantClass anothereleg = eleg;

    std::cout << "value of a in anothereleg object: " << anothereleg.a << '\n';

    // Doing a move constructor:

    MyMoveClass o1{69, "Random ssstring"};
    MyMoveClass o2 = std::move(o1);
    
    MyMoveClass o3(55, "Another ssstring");
    MyMoveClass o4(555, "Somethign else ehehehe");
    o4 = std::move(o3);
}