#include <iostream>
#include <string>
#include <compare>

int main() {

    std::string s1;
    std::string s2;

    // Ask user for two strings
    getline(std::cin, s1);
    getline(std::cin, s2);

    std::cout << "In alphabetical order: " << std::endl;

    // Print them out in alphabetical order
    auto result { s1.compare(s2)};
    if (result < 0) {std::cout << s1 << std::endl << s2 << std::endl;}
    if (result > 0) {std::cout << s2 << std::endl << s1 << std::endl;}
    if (result == 0) {std::cout << "Same alphabetically" << std::endl;}
}