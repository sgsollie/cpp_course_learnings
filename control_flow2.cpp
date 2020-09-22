#include <iostream>
#include <string>

int main()
{
    std::string answer = "Ollie";
    std::string guess;
    int age_answer = 123;
    int age_guess;

    std::cout << "Guess my name!: \n";
    std::cin >> guess;

    std::cout << "Guess my Age!: \n";
    std::cin >> age_guess;


    if (guess == answer && age_guess == age_answer)
    {
        std::cout << "Correct!\n";
    } 
    else
    {
        std::cout << "Wrong!\n";
    }



    unsigned int rooms;
    std::cout << "How many rooms does your house have?\n";
    std::cin >> rooms;
    switch(rooms)
    {
        case 4:
            std::cout << "You have 4 rooms" << std::endl;
            break;
        case 3:
            std::cout << "You have 3 rooms" << std::endl;
            break;
        case 2:
            std::cout << "You have 2 rooms" << std::endl;
            break;
        case 1:
            std::cout << "You have 1 rooms" << std::endl;
            break;
        case 0:
            std::cout << "You have no rooms" << std::endl;
            break;
        default:
            std::cout << "You have MANY rooms" << std::endl;
            break;
    }  
    
    return 0;
}