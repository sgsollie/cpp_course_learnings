#include <iostream>
#include <limits>

void print_array(int inputArray[], int size)               // for functions, standard arrays decay into a pointer so size is wrong
{
    for (int i = 0; i < size; i++)                         // to deal with this we have to pass size as a parameter.
    {
        std::cout << inputArray[i] << "\t";
    }
    std::cout << std::endl;
}

int main ()
{
    /*int guesses[] = {10,20,11,22,99,13};                  // Arrays are not dynamically sized, only on initialization you specify length -
                                                            // either by adding values or putting it inside the [].

    int size = sizeof(guesses) / sizeof(guesses[0]);        // Because each int is 4 bytes, sizeof gives you the total bytes in the array
    std::cout << size << std::endl;                         // so we divide by the size of one element to get the length of the array/

    for (int i = 0; i < size; i++)                          // size can be used for iteration
    {
        std::cout << guesses[i] << std::endl;
    }
    
    
    std::cout << sizeof(guesses) << std::endl;
    print_array(guesses,6); */

////
    const int SIZE = 100;                       // for arrays it is easier to statically specify size up front instead of calculating
    int guesses_user[SIZE];

    int count = 0;                  
    for(int j = 0; j < SIZE; j++)
    {
        if (std::cin >> guesses_user[j])        // This will return true if cin 'works'. cin will error if it can't append an int to the array.
        {
            count++;
        }           
        else
        {
            //invalid character
            break;                              // This means typing in a letter will break the loop.
        }
                              
    }                          
    print_array(guesses_user, count);
    std::cin.clear();                           //clears invalid cin state when a non-numeric character is entered
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');                 //clears input stream of any leftover data
}