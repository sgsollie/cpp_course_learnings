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
    short a;
    int b;
    long c;
    long long d;
    //short <= int <= long <= long long
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << sizeof(long long) << std::endl;         //sizeof operator gives us the size of its arguments in BYTES, not bits.
    cout << USHRT_MAX << std::endl;                 //shows how many values you can store in a given type
}