#include <iostream>
// it is recommended to explicitly include the sting header, bopp... :
#include <string>

int main()
{

    // Here we're using the string class template, which is

    std::string s = "Aw hee!";
    std::cout << '\n'
              << s << '\n';

    s += " Orrajt?";

    std::cout << s;

    char exclam = '!';

    s += exclam;

    std::cout << s;

    // individual characters of a string can be accessed via index or .at(index) function

    std::string something = "kif ahna?";

    char c1 = something[0];
    char c2 = something.at(2);

    std::cout << "Here are individually accessed characters: " << c1 << ", " << c2 << '\n';

    // comparing using == operator:

    std::string first = "some";
     

    if (first == "sme")
    {
        std::cout << "Strings are equal!";
    } else {
        std::cout << "Not equal :( ";
    }

    // accepting a string input via getline function, which takes input and string as parameters:
    // we use getline instead of just cin in order to account for whitespaces

    std::string bird;
    std::cout << "Enter string here: ";
    // std::getline(std::cin, bird);
    // std::cout << "You entered this: " << bird << '\n';

    // the .c_str() is a member function of string type, and returns a pointer to the first element of the string:
    // This member function is of type const char* 
    // it is useful when we want to pass our std::string variable to a function accepting a const char* parameter:

    std::string vehicle = "car";
    std::cout << vehicle.c_str() << '\n';

    // .substr() member function used to create a substring from string:
    // .substring(starting_position, length)

    std::string fruit = "banana";
    std::string partoffruit = fruit.substr(1,3);
    std::cout << "Part of fruit is: " << partoffruit << '\n';

    // .find() to search for a substring and return position of the first found substring, 
    // specifically the position of the first character of the substring
    // if not found, returns std::string::npos
    // and the type is std::string::size_type
    
    std::string searchedstring = "There IT is";
    std::string stringtofind = "IT";
    std::string::size_type found = searchedstring.find(stringtofind);
    if (found != std::string::npos) {
        std::cout << "The string was found at: " << found << '\n';
    } else {
        std::cout << "Not found!" << '\n';
    }

}