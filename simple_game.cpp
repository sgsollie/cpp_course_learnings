#include  <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void print_array(int array[], int count)
{
    std::cout << "Your guesses were: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << array[i] << '\t';
        
    }
    std::cout << std::endl;
    std::cout << "Solved in: " << count << " attempts." << std::endl;
}

void play_game()
{
    int guesses[251];
    int guess_count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;                   //This prints the answer, useful for debugging.
    std::cout << "Guess a number: ";
    while(true)
    {
        int guess;
        std::cin >> guess;
        guesses[guess_count++] = guess;                 //counter can be incremented in the index!
        
        if(guess == random)
        {
            std::cout << "You Win!\n";
            break;
        } else if (guess < random)
        {
            std::cout << "Too low\n";
        } else 
        {
            std::cout << "Too High\n";
        }
    }
    print_array(guesses, guess_count);
    std::cout << std::endl;
}


int main()
{
    srand(time(NULL));                  //Seed a random number using the time   
    int choice;
    do
    {
        std::cout << "Pick an option:\n0. Quit\n1. Play Game\n";
        std::cin >> choice;
        
        switch(choice)
        {
            case 0:
                std::cout << "Bye!\n";
                return 0;
            case 1:
                std::cout << "Let's go!\n";
                play_game();
                break;
            
        }
    } 
    while (choice != 0);
    
}