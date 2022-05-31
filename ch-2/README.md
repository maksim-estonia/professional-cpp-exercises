## Chapter 2: Working with Strings and String Views

### EX 1

Write a program that asks the uses for two strings and then prints them out in alphabetical order, using the three-way comparison operator. To ask the user for a string, you can use the `std::cin` stream. Here is how to read in a string from the console. To terminate the line, just press Enter:

```cpp
std::string s;
getline(std::cin, s1);
```

[Missing C++20 functionality](https://stackoverflow.com/questions/69037873/why-am-i-missing-c20-headers-and-how-do-i-fix-this)
[Install g++-10](https://ahelpme.com/linux/ubuntu/install-and-make-gnu-gcc-10-default-in-ubuntu-20-04-focal/)

`c_cpp_properties.json`:

```json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/g++",
            "cStandard": "gnu17",
            "cppStandard": "c++17",
            "intelliSenseMode": "linux-gcc-x64"
        }
    ],
    "version": 4
}
```

Build: `g++ -std=c++17 main.cpp -o main`



### EX 2

Write a program that asks the user for a source string (= haystack), a string to find (= needle) in the source string, and a replacement string. Write a function with three parameters—the haystack, needle, and replacement string—that returns a copy of the haystack with all needles replaced with the replacement string. Use only `std::string`, no `string_view`. What kind of parameter types will you use and why? Call this function from `main()` and print out all the strings for verification.

### EX 3

Modify the program from Exercise 2-2 and use `std::string_view` on as many places as you can.

### EX 4

Write a program that asks the user to enter an unknown number of floating-point numbers and stores all numbers in a `vector`. Each number should be typed followed by Enter. Stop asking for more numbers when the user inputs the number 0. To read a floating-point number from console, use `cin`. Format all numbers in a couple of columns where each column formats a number in a different way. Each row in the table corresponds to one of the inputted numbers. 