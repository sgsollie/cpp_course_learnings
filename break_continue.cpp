#include <iostream>
#include <string>

int main()
{
    std::string sentence = "YO what is up with thee";
    for (int i = 0; i < sentence.length(); i++)
    {
        std::cout << sentence[i] << " " ;
        if(sentence[i] == 'u')
        {
            std::cout << "\nfound u!\n";
            break;
        }
    }
}