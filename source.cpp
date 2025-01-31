#include <iostream>

int main()
{
    std::cout << '\n' << "Hello World" << '\n'
              << "Second line" << '\n' << "Or hekk: First line\nSecond line" << '\n';

    // declaring a boolean variable:

    bool b = true;

    // declaring it LOCALLY:

    bool c{true};

    // declaring a character - to be done in single quotes:

    char a = 'd';

    std::cout << "The value of a is: " << a << '\n';

    // now let's change the value of a:

    a = 'A';

    std::cout << "The new value of a is: " << a << '\n';

    // Let's check its size, which for chars should always be 1 byte:

    std::cout << "The size of a is: " << sizeof(a) << " byte(s)" << '\n';

    // Every char is also represented by a number, so we can assign as below, which seems unnecessary:

    char e = 'a';
    char f = 97;

    std::cout << "Char e is: " << e << " While char f is: " << f << '\n';

    // Integer:

    int g = 123;
    int h = -456;

    // Assigning variable with a value of another variable:

    int i = 999;
    int j = i; 

    i = 1000;
    // int j is still 999;

    // integers can be decimal (normal), octal and hexadecimal. Below they are all 10s:

    int normal = 10;
    int octopus = 012;
    int hexadoctopus = 0xA;

    // Floating types are: float, double and long double. Double is most common:

    double dbbl = 231.456;
    double anotherdbbl = 1.;
    double onemoredbbl = .15;
    double pie = 3.14e10;

    // There are also type modifiers: signed/unsigned, short/long. They can also be combined:

    unsigned long int k = 1234564897;    

    // It's also possible to declare multiple names in the same line:

    int l, m, n;

    // modulo operator % is also available

    std:: cout << "Let's use modulo operator to divide 100 by 34: " << 100 % 34 << '\n';

    // When dividing integers by each other, the result is truncated towards zeros:

    int o = 123;
    int p = 456;

    std::cout << "Let's divide 123 by 456: " << o / p << '\n';

    o = 9;
    p = 3;

    std::cout << "Now how about 9 divided by 3: " << o / p << '\n';

    // So really the correct way is that at least one of the operands needs to be a floating point:

    o = 123;
    double oo = 456.0;

    std::cout << "Let's divide integer 123 by a double 456.0: " << o / oo << '\n';

    // Also below is possible:

    double resultofdivision = 123 / 456.0;

    std::cout << "Dividing 123 by 456.0 inside a variable declaration: " << resultofdivision << '\n';

    // Compound assignment operators such as += or *= are also available

    // Below is a way to accept user input and read it into a variable:

    std::cout << "Enter an integer number: ";
    int aa;
    std::cin >> aa;
    std::cout << "You entered: " << aa;

    // Multiple values can be accepted:

    std::cout << "Please enter 2 integers separated by a space: ";
    int bb;
    int cc;
    std::cin >> bb >> cc;
    std::cout << "Here's what was entered: " << bb << " and " << cc;

    // ...pg 31...
}