#include <iostream>
#include <cmath>
using std::cout;

int main()
{
    cout << sqrt(-25) << std::endl;             //gives us NaN
    cout << pow(9,999) << std::endl;            //gives us inf
    cout << remainder(10,3) << std::endl;       //gives us remainder of division between two numbers
    cout << fmax(10,3) << std::endl;            //gives us largest (max) of the two values
    cout << ceil(-1.5) << std::endl;            //rounds up to nearest whole 
    cout << floor(-1.5) << std::endl;           //rounds down to nearest whole
    cout << round(-1.5) << std::endl;           //rounds to whatever is closest
}
