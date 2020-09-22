#include <iostream>
int main()
{
    int age;
    std::cout << "Enter your age: \n";
    std::cin >> age;
    std::cout << "Age is: " << age << std::endl;
    if(age < 21)
    {
        std::cout << "You are not old enough\n";
        return 1;
    }
    std::cout << "You are old enough" << std::endl;

    if (age >= 65)
    {
        std::cout << "You are past retirement age" << std::endl;
    } 
    else
    {
        std::cout << "You are not yet at retirement age" << std::endl;
    }
    
    return 0;    
}