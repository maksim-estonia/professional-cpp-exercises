#include <iostream>
#include <string>

void fillWithM(std::string& text)
{
    for (auto& character : text) {
        character = 'm';
    }
}

int main()
{
    std::string hello{ "Hello world!" };
    
    std::cout << "Before: " << hello << std::endl;

    fillWithM(hello);

    std::cout << "After: " << hello << std::endl;
}