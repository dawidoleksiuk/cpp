*This project has been created as part of the 42 curriculum by doleksiu.*

# C++ - Module 02

**Ad-hoc polymorphism, operator overloading and the Orthodox Canonical class form.**

## Description
The primary goal of this project is to introduce Object-Oriented Programming. The exercises explore crucial mechanics of the language, specifically focusing on ad-hoc polymorphism, operator overloading, and the Orthodox Canonical class form. From this module onward, all classes are designed in the Orthodox Canonical Form. This form requires the implementation of four specific member functions: a default constructor, a copy constructor, a copy assignment operator, and a destructor. To build a strong, fundamental skillset without the distractions of modern abstractions, all solutions are strictly implemented using the C++98 standard.

## Exercises Overview

* **Exercise 00 (My First Class in Orthodox Canonical Form):** An introduction to creating a class in Orthodox Canonical Form that represents a fixed-point number.
* **Exercise 01 (Towards a more useful fixed-point number class):** Expanding the `Fixed` class by adding constructors and member functions to convert fixed-point values to and from floating-point and integer values. It also includes an overload of the insertion operator.
* **Exercise 02 (Now we're talking):** Further expanding the `Fixed` class by overloading the 6 comparison operators, 4 arithmetic operators, and 4 increment/decrement operators. Static member functions `min` and `max` are also implemented.
* **Exercise 03 (BSP):** Implementing a `Point` class representing a 2D point and a function that indicates whether a point is inside a triangle. BSP stands for Binary Space Partitioning.

## Instructions
Each exercise is isolated in its own directory (`ex00`, `ex01`, `ex02`, `ex03`). 

**Compilation:**
Navigate to the desired exercise folder and compile the code using `make`. The `Makefile` utilizes the `c++` compiler and enforces the mandatory strict compilation flags: `-Wall -Wextra -Werror -std=c++98`.

## Usage Example

```bash
cd ex02
make
./executable

```

**Memory Verification:**
Dynamic memory allocations were tested using Valgrind to ensure no memory leaks occur. Every memory allocation (using the `new` keyword) is properly managed and freed.

## Resources

**Documentation & References:**

* [cplusplus.com](https://cplusplus.com/) - Excellent tutorials and examples for understanding operator overloading and ad-hoc polymorphism.
* Fixed-point arithmetic - Theoretical concepts regarding the balance between performance, accuracy, range, and precision in fixed-point numbers.

**AI Usage:**

* AI was utilized as a conceptual learning assistant during the development of this module. It was specifically used to clarify theoretical OOP concepts (such as the Orthodox Canonical Form and operator overloading) and to format this documentation. It was not used to generate the logic or the source code for the exercises themselves, ensuring the foundational learning process remained intact.