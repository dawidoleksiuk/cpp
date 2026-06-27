*This project has been created as part of the 42 curriculum by doleksiu*

# C++ - Module 00

## Description
The goal of this project is to introduce the concepts of Object-Oriented Programming using the C++ programming language. To build a strong core understanding before moving on to modern features, the codebase strictly follows the C++98 standard. 

This module covers namespaces, classes, member functions, standard I/O streams, initialization lists, static variables, and `const` attributes through three distinct exercises:
* **Exercise 00 (Megaphone):** A simple string manipulation warm-up that converts input arguments to uppercase.
* **Exercise 01 (My Awesome PhoneBook):** A functional terminal-based phonebook that demonstrates data encapsulation, array management without dynamic allocation, and class interactions.
* **Exercise 02 (The Job Of Your Dreams):** A reverse-engineering challenge requiring the recreation of a lost source file based on a provided header, test file, and execution logs.

## Instructions
Each exercise is isolated in its own directory (`ex00`, `ex01`, `ex02`). 

**Compilation:**
Navigate to the desired exercise folder and compile the code using `make`. The `Makefile` utilizes the `c++` compiler and enforces the mandatory strict compilation flags: `-Wall -Wextra -Werror -std=c++98`.

**Execution:**
* **ex00:** Run `./megaphone [string1] [string2] ...`
* **ex01:** Run `./phonebook` and follow the interactive console prompts (`ADD`, `SEARCH`, `EXIT`).
* **ex02:** Run `make` and execute the generated binary to compare its output with the provided log file.

## Resources
**Documentation & References:**
* [cplusplus.com](https://cplusplus.com/) - Accessible examples for standard library components (especially `<iostream>` and `<iomanip>` used in this module).
* [geeksforgeeks.org/cpp/iomainip](https://www.geeksforgeeks.org/cpp/iomanip-in-cpp/) - Article about `<iomanip>` with examples.

**AI Usage:**
* AI was utilized as a conceptual learning assistant during the development of this module. It was specifically used to clarify theoretical OOP concepts (such as the Orthodox Canonical Form and nested exception classes), and to format this documentation. It was not used to generate the logic or the source code for the exercises themselves, ensuring the foundational learning process remained intact.