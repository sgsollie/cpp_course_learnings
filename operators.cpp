#include <iostream>

using std::cout;

int main()
{
    //storing x in a double as it has floating point numbers as an operand
    double x = 25 + (4.0 / 3);           // operator precedece will happen (like mathematical BODMAS etc, the bracketed division will go first)
    cout << x << std::endl;

    int y = 12 * 4 * 3;                  // operators of the same precedence will have left to right asociativity
    cout << y << std::endl;


    //Assignment operator is right to left
    int a,b;
    a = b = 10;
    cout << a << std::endl;
}