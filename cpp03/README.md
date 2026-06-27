*This project has been created as part of the 42 curriculum by doleksiu.*

# C++ - Module 03

**Inheritance**

## Description
The primary goal of this project is to introduce Object-Oriented Programming. The exercises explore crucial mechanics of the language, specifically focusing on class inheritance. All classes are designed in the Orthodox Canonical Form. This form requires the implementation of four specific member functions: a default constructor, a copy constructor, a copy assignment operator, and a destructor. To build a strong, fundamental skillset without the distractions of modern abstractions, all solutions are strictly implemented using the C++98 standard.

## Exercises Overview

* **Exercise 00 (Aaaaand... OPEN!):** An introduction to creating a base class called `ClapTrap` with core attributes (Hit points, Energy points, Attack damage) and member functions to perform actions like attacking, taking damage, and repairing.
* **Exercise 01 (Serena, my love!):** An introduction to single inheritance. This exercise creates a `ScavTrap` class derived from `ClapTrap`. It demonstrates proper constructor and destructor chaining (where the base class is constructed first and destroyed last), overrides inherited functions, and introduces a unique ability (`guardGate`).
* **Exercise 02 (Repetitive work):** Further practice with single inheritance by creating a `FragTrap` class, also derived from `ClapTrap`, utilizing different base stats and introducing another special ability (`highFivesGuys`).
* **Exercise 03 (Now it's weird!):** An exploration of multiple inheritance and the infamous "Diamond Problem". The `DiamondTrap` class inherits from both `FragTrap` and `ScavTrap`. This exercise requires understanding how to manage attributes inherited from multiple sources and ensuring the base `ClapTrap` instance is created only once.

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
Dynamic memory allocations were tested using Valgrind to ensure no memory leaks occur. Proper destruction chaining guarantees that all resources are safely freed upon program termination.

## Resources

**Documentation & References:**

* [cplusplus.com](https://cplusplus.com/) - Excellent tutorials and examples for understanding class inheritance, proper construction chaining, and the diamond problem.
* [cppreference.com](https://en.cppreference.com/) - The definitive C++ standard reference.

**AI Usage:**

* AI was utilized as a conceptual learning assistant during the development of this module. It was specifically used to clarify theoretical OOP concepts (such as multiple inheritance, virtual base classes, and the `-Wshadow` compiler flag) and to format this documentation. It was not used to generate the logic or the source code for the exercises themselves, ensuring the foundational learning process remained intact.