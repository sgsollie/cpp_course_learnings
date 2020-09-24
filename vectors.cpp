#include <iostream>
#include <vector>

void print_vector(std::vector<int> &data)               // When passing a vector to a function, the original is duplicated
{                                                       // a new vector is created in memory and worked on by the function
    for (int i = 0; i < data.size(); i++)               // This means any changes made to this vector inside the function
    {                                                   // will not be reflected in the original - referenced in main()
        std::cout << data[i] << '\t';                   // By adding the ampersand you can pass by reference which will
    }                                                   // give the function the memory address of the vector in main
    std::cout << std::endl;
}

int main()
{
    std::vector<int> data = {1,2,3};
    data.push_back(4);
    std::cout << data[data.size() -1 ] << std::endl;

    data.pop_back();
    std::cout << data[data.size() -1 ] << std::endl;        //showing dynamic sizing

    print_vector(data);
}