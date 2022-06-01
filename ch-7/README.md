## Chapter 7: Memory Management

### Finding and Fixing Memory Leaks in Linux with Valgrind

Preparing your program

Compile your program with `-g` to include debugging information so that Memcheck's error messages will include exact number lines. Using `-O0` is also a good idea, if you can tollerate the slowdown. 

`g++ -std=c++17 -g -O0 main.cpp -o main`

Run valgrind:

`valgrind --leak-check=yes g++ -std=c++17 -g -O0 main.cpp main`

### EX 1

_Can you list any problems you find with it?_

- not using `delete` to free memory
- `values[10]` is outside the range
- `print` goes beyond the range

### EX 2

_Rewrite the code snippet to use modern and safe C++ constructs._

### EX 3

Write a basic class to store a 3-D point with x, y, and z coordinates. Include a constructor accepting x, y, and z arguments. Write a function that accepts a a 3-D point and prints out its coordinates using `std::format()`. In your main function, dynamically allocate an instance of your class and subsequently call your function.

### EX 4

Can you modernize this function using safe C++ alternatives? Test your solution with your main() function