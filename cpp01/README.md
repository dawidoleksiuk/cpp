*This project has been created as part of the 42 curriculum by doleksiu.*

# C++ - Module 01

**Memory allocation, pointers to members, references and switch statements.**

## Description
The primary goal of this project is to deepen understanding of Object-Oriented Programming. Throughout the exercises, crucial mechanics of the language are explored, specifically focusing on manual memory allocation, the use of references, pointers to members, and switch statements. To build a strong, fundamental skillset without the distractions of modern abstractions, all solutions are strictly implemented using the C++98 standard.

## Exercises Overview

* **Exercise 00 (BraiiiiiiinnnzzzZ):** An introduction to manual memory management. This exercise requires implementing a `Zombie` class and discovering when it is more appropriate to allocate objects on the stack versus the heap (`newZombie` vs `randomChump`).
* **Exercise 01 (Moar brainz!):** Expanding on memory allocation by creating an array of objects (a zombie horde) in a single allocation. It demonstrates the proper use of `new[]` and `delete[]` to prevent memory leaks when dealing with multiple class instances.
* **Exercise 02 (HI THIS IS BRAIN):** A simple exercise designed to demystify references in C++ and compare them directly with pointers and standard address manipulation.
* **Exercise 03 (Unnecessary violence):** Implementing a `Weapon` class used by two different `Human` classes. This exercise explores the design choice between using a pointer and a reference for class members, based on object lifecycle and whether the member is guaranteed to exist.
* **Exercise 04 (Sed is for losers):** An introduction to file streams (`<fstream>`). The program reads an input file and creates a new one with specific strings replaced, completely avoiding the forbidden `std::string::replace` function.
* **Exercise 05 (Harl 2.0):** Automating a complaining bot using an array of pointers to member functions. The goal is to call the appropriate member function without relying on a forest of `if/else if/else` statements.
* **Exercise 06 (Harl filter):** Expanding on the Harl class by using the `switch` statement to filter log levels (`DEBUG`, `INFO`, `WARNING`, `ERROR`) based on user input, taking advantage of the implicit fall-through behavior of switch cases.

## Instructions
Each exercise is isolated in its own directory (`ex00`, `ex01`, ..., `ex06`). 

**Compilation:**
Navigate to the desired exercise folder and compile the code using `make`. The `Makefile` utilizes the `c++` compiler and enforces the mandatory strict compilation flags: `-Wall -Wextra -Werror -std=c++98`.

## Usage Example

```bash
cd ex04
make
./replace <filename> <string1> <string2>

```

## Resources

**Documentation & References:**

* [cplusplus.com](https://cplusplus.com/) - Excellent tutorials and examples, especially useful for file stream operations (`<fstream>`) used in Exercise 04.

**AI Usage:**

* AI was utilized as a conceptual learning assistant during the development of this module. It was specifically used to clarify theoretical OOP concepts (such as the differences between references and pointers, and the syntax for pointers to member functions), and to format this documentation. It was not used to generate the logic or the source code for the exercises themselves, ensuring the foundational learning process remained intact.