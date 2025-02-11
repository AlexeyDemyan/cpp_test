#include <iostream>

class MyBaseClass
{
public:
    char c;
    int x;

protected:
    char cc;
    int xx;
private:
    char cccc;
    int xxxx;
};

class MyDerivedClass : public MyBaseClass
{
    // public members c and x are accessible here
    // protected members cc and xx are accessible here as well
    // public and protected members are being inherited
    // private members cccc and xxxx are NOT accessible here
};

int main()
{
    MyDerivedClass o;
    o.c = 'a';
    o.x = 123;

    // o.cc and o.xx are not accessible here as they are protected. Pretty cool. Neither are private members
}
