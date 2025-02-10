#include <iostream>

class MyBaseClass
{
public:
    char c;
    int x;

protected:
    char cc;
    int xx;
};

class MyDerivedClass : public MyBaseClass
{
    // members c and x are accessible here
    // members cc and xx are accessible here as well
};

int main()
{
    MyDerivedClass o;
    o.c = 'a';
    o.x = 123;

    // o.cc and o.xx are not accessible here as they are protected. Pretty cool
}
