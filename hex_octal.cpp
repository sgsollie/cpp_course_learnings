#include <iostream>
#include <string>

using std::cout;

int main()
{
    int numberOct = 030;                                // octal numbers are prefixed with a leading 0
    int numberHex = 0xBA;                               // hex numbers are prefixed with 0x
    cout << std::oct << numberOct << std::endl;         // std::{oct||hex} formats the output to the actual hex or oct value
    cout << std::hex << numberHex << std::endl;         // not including that will print the number in base 10
}