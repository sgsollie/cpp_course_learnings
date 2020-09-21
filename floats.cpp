#include <iostream>
#include <float.h>

// Floating point numbers - decimal numbers, the point moves 
// doubles can hold large values, no real need to use floats unless memory is limited

using std::cout;

int main()
{

    float a = 10.0 /3;
    a = a*10000000000;                   //float isn't big enough to store this accurately
    double b = 7.7e4;
    long double c;

    cout << b << std::endl;
    cout << LDBL_DIG << std::endl;       // from float.h - shows how many digits a float can be accurate by
}