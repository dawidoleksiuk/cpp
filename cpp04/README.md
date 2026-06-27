*This project has been created as part of the 42 curriculum by doleksiu.*

# C++ - Module 04

**Subtype Polymorphism, Abstract Classes, and Interfaces**

## Description
The primary goal of this project is to introduce Object-Oriented Programming. The exercises explore crucial mechanics of the language, specifically focusing on subtype polymorphism, abstract classes, and interfaces. All classes are designed in the Orthodox Canonical Form. This form requires the implementation of four specific member functions: a default constructor, a copy constructor, a copy assignment operator, and a destructor. To build a strong, fundamental skillset without the distractions of modern abstractions, all solutions are strictly implemented using the C++98 standard.

## Exercises Overview

* **Exercise 00 (Polymorphism):** An introduction to subtype polymorphism using virtual functions. This exercise creates a base `Animal` class and derived `Dog` and `Cat` classes to demonstrate how the correct overridden member function is dynamically called at runtime.
* **Exercise 01 (I don't want to set the world on fire):** An exploration of memory management and deep copying. Classes are expanded to include a `Brain` class allocated on the heap. This exercise highlights the importance of proper destructors and deep copy implementations to avoid shallow copy memory issues and leaks when creating or assigning objects.
* **Exercise 02 (Abstract class):** A modification to the previous exercise to transform the base `Animal` class into a pure abstract class, preventing it from being directly instantiated.
* **Exercise 03 (Interface & recap):** A comprehensive final exercise simulating interfaces in C++98 using pure abstract classes. It involves creating a materia inventory system (`AMateria`, `Character`, `MateriaSource`) to practice interface implementation, deep copying of complex structures, and meticulous memory management (e.g., handling unequiped items without leaking memory).

## Instructions
Each exercise is isolated in its own directory (`ex00`, `ex01`, `ex02`, `ex03`). 

**Compilation:**
Navigate to the desired exercise folder and compile the code using `make`. The `Makefile` utilizes the `c++` compiler and enforces the strict compilation flags: `-Wall -Wextra -Werror -std=c++98`.

## Usage Example

```bash
cd ex03
make
./a.out

```

**Memory Verification:**
Dynamic memory allocations were tested using Valgrind to ensure no memory leaks occur. Proper virtual destruction chaining guarantees that all resources, including deeply copied heap allocations, are safely freed upon program termination.

## Resources

**Documentation & References:**

* [cplusplus.com](https://cplusplus.com/) - Excellent tutorials and examples for understanding polymorphism, virtual functions, and abstract classes.
* [cppreference.com](https://en.cppreference.com/) - The definitive C++ standard reference.

**AI Usage:**

* AI was utilized as a conceptual learning assistant during the development of this module. It was specifically used to clarify theoretical OOP concepts (such as the differences between shallow and deep copies, and the mechanics of pure virtual functions) and to format this documentation. It was not used to generate the logic or the source code for the exercises themselves, ensuring the foundational learning process remained intact.
