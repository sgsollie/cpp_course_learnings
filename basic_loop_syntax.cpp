#include <iostream>

int main()
{
    
    //while
    int i = 0;
    while (i < 10)
    {
        std::cout << i << std::endl;
        i++;
    }
    
    //for
    for (int j = 0; j < 10; j++)
    {
        std::cout << j << std::endl;
    }
    

    std::cout << "\nFactorial:\n";

    int factorial = 5;
    int k = factorial -1;
    while (k > 1)
    {
        factorial *= k;
        k--;
    }
    std::cout << factorial << std::endl;


    //do while - something that happens at least once - eg matching a password from input

    std::string password = "guessthisword123";
    std::string guess;
    do
    {
        std::cout << "Guess the password: ";
        std::cin >> guess;

    } while(guess != password);

}