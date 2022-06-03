## Chapter 8: Gaining Proficiency with Classes and Objects


### EX 1

Implement a `Person` class storing a first and last name as data members. Add a single constructor accepting two parameters, the first and last name. Provide appropriate getters and setters. Write a small `main()` function to test your implementation by creating a `Person` object on the stack and on the free store.

### EX 2

With the set of member functions implemented in ex 1, the following line of code does not compile:

```cpp
Person phonebook[3];
```

Can you explain why it does not compile? Modify the implementation of your `Person` class to make this work.

No default constructor for Person

### EX 3

Add the following methods to your `Person` class implementation: a copy constructor, an assignment constructor, an assignment operator, and a destructor. 

### EX 4

