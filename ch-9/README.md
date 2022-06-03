## Chapter 9: Mastering Classes and Objects

### EX 1

Take your implementation of the `Person` class from ex 8-3 and adapt it to pass strings in the most optimal way you can think of. 

-> Moving moves ownership of memory and other resources from one object to another object. It basically does a shallow copy of data members and switches ownership from of allocated memory and other resources to prevent dangling pointers or resources to prevent memory leaks. 

Additionally, add a move constructor and move assignment operator to it. In both methods, write a message to the console so you can track when they get called. Implement any additional methods you need for implementing the move method and for improving the implementation of other methods from ex 8-3 to avoid code duplication. Modify `main()` to test your methods.

### EX 2

Based on the `Person` class from ex 8-4, add full support for all six comparison operators to compare two `Person` objects. 

### EX 4

In this exercise, you'll practice writing stable interfaces. Take your `Person` class from ex 8-4, and split it up into a stable public interface class and a seperate implementation class. 