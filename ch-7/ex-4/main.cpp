#include <string>
#include <iostream>
#include <memory>

void fillWithM(std::string& text) 
{
    for (int i {0}; i < text.length(); i++) {
        text[i] = 'M';
    }
}

int main()
{
    auto text { std::make_unique<std::string> ("abcdefghij") };

    std::cout << "Before: " << *text << std::endl;

    fillWithM(*text);

    std::cout << "After: " << *text << std::endl;
}