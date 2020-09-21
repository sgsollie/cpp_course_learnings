#include <iostream>
using std::cout;

// Read only "variable" - read only after it is first declared. Can't assign new values

int main()
{
    static const int x = 5;     //static const remains in memory for the life of the program. Normal const is deleted after function returns
    enum { y = 100 };           // enum is a nice way of assigning multiple consts at once. Underlying type isn't fixed here
    enum {z = 1, z1, z2, z3};   // Enumerating constants
    //int y = 200;                // this would error with previous declaration error
    cout << y << std::endl;
    cout << z3 << std::endl;
}