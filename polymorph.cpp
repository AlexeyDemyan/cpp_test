#include <iostream>

class MyBaseClass
{
public:
    virtual void dowork()
    {
        std::cout << "calling dowork function of base class \n";
    }
    int x;
};

class MyDerivedClass : public MyBaseClass
{
public:
    void dowork()
    {
        std::cout << "calling dowork function in the derived class \n";
    }
};

class MyAbstractClass
{
public:
    // this is a Pure Virtual function. It must be redefined in derived class
    // classes with at least one Pure Function are called Abstract classes and cannot be instantiated
    // but you can still inherit from them
    virtual void dowork() = 0;
    // It's important to add a virtual destructor here, to prevent memory leaks:
    virtual ~MyAbstractClass() {};
};

class MyDerivedFromAbstractClass : public MyAbstractClass
{
public:
    void dowork()
    {
        std::cout << "calling dowork function in class derived from abstract \n";
    }
};

int main()
{
    MyBaseClass *o = new MyDerivedClass;
    // if there was no dowork implementation in the derived class, it would invoke it from the Base Class
    o->dowork();
    delete o;

    MyAbstractClass *oo = new MyDerivedFromAbstractClass;
    oo->dowork();
    // writing oo.dowork() here will actually throw an error, so tajjeb
    delete oo;
}
