#include <iostream>
#include <string>
using std::cout;

int main()
{
    std::string greeting = "1 hello";
    cout << greeting[0] << greeting + " there" << std::endl;
    cout << greeting.length() << std::endl;                     //string is a class. Length is a method of that class

    //C style string:
    char name[]= "Ollie";                              // c string - array of chars "Ollie\0" - can't assign anything to name of a different length
    cout << name << std::endl;

    /*std::cin >> greeting;                            // Will only collect first word of string
    cout << greeting << std::endl;*/

    getline(std::cin, greeting);                       // Collects whole line
    greeting.insert(0, "The phrase: ");
    greeting += " ...is what you wrote.";              // .append() will also do this
    cout << greeting << std::endl;
    cout << "Length of that is: " << greeting.length() << std::endl;            // .size() will do exactly the same as .length()

    cout << greeting.erase(greeting.length() -1) << std::endl;  //Print greeting without the last character
    //cout << greeting.replace(0,7, "Replace") << std::endl;


    cout << greeting.replace(greeting.find("wrote"), 5 , "said") << std::endl;

    std::string compareme = "Hello There";
    if (compareme == "Hello There") std::cout << "Hello There General Kenobi" << std::endl;
}
