## Chapter 6: Designing for Reuse

### EX 1

_What does it mean to make the common case easy and the unlikely case possible?_

A good API makes the common case easy and the advanced/unlikely case possible. The things that most programmers will want to do should be accessible. However, the API should allow for more advanced usage, and it's acceptable to trade off complexity of the rare case for simplicity of the common case. 

### EX 2

_What is the number-one strategy for reusable code design?_

The most important strategy for designing reusable code is abstraction.

The key to abstraction is effectively seperating the interface from the implementation. The implementation is the code you're writing to accomplish the task you set out to acccomplish. The interface is the way other people use your code. In object-oriented programming, the interface to a class is the collection of publicly accessible method and properties. However, a good interface should contain only public methods. Properties of a class should never be made public but can be exposed through public methods, also called getters and setters. 

### EX 3



### EX 4