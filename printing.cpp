#include <iostream>

using std::cout;
using std::cin;

int main() // main function - returns an int
{
    int slices;             // declaration (only need to specify type on declaration) & assignment
    cout << "How many slices do you have? \n";
    cin >> slices;          //take user input and assign to slices var - the arrows point in the direction of dataflow
    cout << "You have " << slices << " slices of pizza." << std::endl; 

    //printf("%i\n", slices); // C style
    return 0;
}