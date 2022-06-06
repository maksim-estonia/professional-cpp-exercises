## Chapter 10: Discovering Inheritance Techniques

## EX 1

Take the `Person` class from Exercise 9-2 and add a derived class called `Employee`. You can omit the overload of `operator<=>` from ex 9-2. The `Employee` class adds one data member, an employee ID. Provide an appropriate constructor. From `Employee`, derive two more classes called `Manager` and `Director`.

Put all your classes, including the `Person` class, in a namespace called `HR`.

`g++ -std=c++17 main.cpp HR.cpp -o main`

## EX 2

Continuing with your solution from ex 10-1, add a `toString()` method to the `Person` class returning a string representation of a person. Override this method in the `Employee`, `Manager`, and `Director` classes to build up a complete string representation by delegating part of their work to parent classes. 

## EX 3

Practise polymorphic behaviour of the classes in your `Person` hierarchy from ex 10-2. Define a `vector` to store a mix of exmployees, managers, and directors, and fill it with some test data. Finally, use a single range-based `for` loop to call `toString()` on all of the elements in the `vector`.

## EX 4

In real companies, employees can get promoted to a manager or director position. Do you see any way you can add support for this to you class hierarchy of ex 10-3.

