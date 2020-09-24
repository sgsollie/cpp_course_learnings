#include <string>
#include <iostream>

int main()
{
    int answer = 11;
    std::cout << "Guess the number: ";
    int guess;
    std::cin >> guess;
    int points = guess == answer ? 10 : 0;              // set points to 10 if guess == answer, to 0 if guess != answer.
                                                        // left side of the : is the value to set if true. Right side is the value to set if false
    std::cout << "Points: " << points << std::endl;                                                        
}