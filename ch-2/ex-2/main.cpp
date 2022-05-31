#include <string>
#include <cstring>
#include <string_view>
#include <iostream>


std::string find_and_replace_haystack(std::string haystack, std::string_view needle, std::string_view replacement);

int main() {
    std::string haystack {"abcdabefghabcijklabc"};
    std::string needle {"abc"};
    std::string replacement {"xyz"};

    std::string processed_haystack = find_and_replace_haystack(haystack, needle, replacement);

    std::cout << "haystack: " << haystack << std::endl;   
    std::cout << "needle: " << needle << std::endl;
    std::cout << "replacement: " << replacement << std::endl;
    std::cout << "processed haystack: " << processed_haystack << std::endl;

    return EXIT_SUCCESS;
}

std::string find_and_replace_haystack(std::string haystack, std::string_view needle, std::string_view replacement){
    while (haystack.find(needle) != std::string::npos) {
        unsigned long position = haystack.find(needle);
        std::cout << "position: " << position << std::endl;
        haystack.replace(position, strlen(needle.data()), replacement);
    }
    
    return haystack;
}