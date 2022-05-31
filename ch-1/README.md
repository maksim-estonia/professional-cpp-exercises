## CH 1: A Crash Course in C++

### EX 1

Modify the `Employee` structure from the beginning of this chapter by putting it in a namespace called `HR`. What modifications do you have to make to the code in `main()` to work with this new implementation? Additionally, modify the code to use C++20 designated initializers.

Build: `g++ main.cpp -o main`

Run: `./main`

### EX 2

Build further on the result of Exercise 1-1 and add an enumeration data member `title` to `Employee` to specify whether a certain employee is a Manager, Senior Engineer, or Engineer. Which kind of enumeration type will you use and why? Whatever you need to add, add it to the `HR` namespace. Test your new `Employee` data member in the `main()` function. Use a `switch` statement to print out a human-readable string for the title.

### EX 3

Use an `std::array` to store the three `Employee` instances from Exercise 1-2 with different data, Subsequently, use a range-based `for` loop to print out the employees in the `array`.

### EX 4

Do the same as Exercise 1-3, but use an `std::vector` instead of an `array`, and use `push_back()` to insert elements into the `vector`.

### EX 5

Now that you know about `const` and references, and what they are used for, modify the `AirlineTicket` class from earlier in this chapter to use references wherever possible and to be so-called `const` correct.

### EX 6

Modify the `AirlineTicket` class from Exercise 1-5 to include an optional frequent-flyer number. What is the best way to represent this optional data member? Add a setter and getter to set and retrieve the frequent-flyer number. Modify the `main()` function to test your implementation.