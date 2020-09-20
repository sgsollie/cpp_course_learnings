#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double base, int exponent)         // Declaring and defining here
{
    double result = 1;                          // double is a fractional datatype
    for(int i = 0; i < exponent; i++) 
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);  
    cout << base << " raised to the " << exponent << " power is " << myPower << std::endl;
}

int main() // main function - returns an int
{
    double base;
    int exponent;
    
    cout << "What is the base? ";
    cin >> base;
    cout << "What is the exponent? ";
    cin >> exponent;
    print_pow(base, exponent);
}