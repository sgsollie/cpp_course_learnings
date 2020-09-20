#include <iostream>
#include <climits>
using std::cout;


/*
  signed integral types allow negative numbers (first bit is a sign to say if pos or neg)
  unsigned types only allow positive numbers, but double the amount of positive values than their signed counterparts,
  due to the first bit being made available
*/

int main()
{
    unsigned char x = 200  ;                    // single quotes for chars, double quotes for strings
    cout << x << std::endl;                     // print ASCII char for given ascii number
}