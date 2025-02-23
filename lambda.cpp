#include <iostream>

int main()
{
    auto myLambda = []()
    { std::cout << "calling a lambda function \n"; };
    myLambda();
    []()
    { std::cout << "calling another lambda function \n"; }();

    // using capture and params:

    int x = 69;
    char a = 'A';

    auto anotherLamb = [&x, a](std::string optionalStringParam, int optionalIntParam)
    {
        std::cout << "calling the third lambda with captures: \n"; 
        std:: cout << "Value of x is: " << x << " Since we pass it by referemce, let's increment it \n";
        x++;
        std::cout << "New value of x is: " << x << '\n';
        std::cout << "And here is a: " << a << '\n';
        std::cout << "And here are our optional parameters: " << optionalStringParam << " " << optionalIntParam << '\n'; };

    anotherLamb("Hiya!", 900);
}