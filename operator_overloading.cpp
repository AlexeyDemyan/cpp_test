#include <iostream>

// objects of classes can be used as operands, e.g.:
// myobj + anotherobj
// in order to do that, we need to overload operators

class MyOverloadClass
{
private:
    int x;
    double d;
    int y;

public:
    MyOverloadClass() : x{1}, d{0.0}, y{69} {}
    MyOverloadClass &operator++()
    {
        ++x;
        ++d;
        std::cout << "Prefix operator ++ invoked \n";

        return *this;
    }
    MyOverloadClass operator++(int)
    {
        MyOverloadClass tmp(*this); // Creating a copy
        operator++();               // invoking the prefix operator from before
        std::cout << "Postfix operator ++ invoked. \n";
        return tmp;
    }
    MyOverloadClass &operator+=(const MyOverloadClass &rhs)
    {
        this->x += rhs.x;
        this->d += rhs.d;
        this->y += rhs.x;
        std::cout << "Invoked += operator \n";
        
        return *this;
    }
    void getX()
    {
        std::cout << "Here's value of x: " << x << '\n';
    }
    void getY()
    {
        std::cout << "here is new value of y: " << y << '\n';
    }
};

int main()
{
    MyOverloadClass myobject;
    // We can do like this:
    ++myobject;
    // Or like this:
    myobject.operator++();
    myobject.getX();

    myobject++;
    // Or:
    myobject.operator++(0);

    MyOverloadClass mysecondobject;

    myobject += mysecondobject;
    myobject.getY();
    myobject.getX();
}