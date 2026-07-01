*This project has been created as part of the 42 curriculum by doleksiu*

# C++ - Module 00

## Description
The goal of this project is to introduce the concepts of Object-Oriented Programming using the C++ programming language. To build a strong core understanding before moving on to modern features, the codebase strictly follows the C++98 standard. 

This module covers namespaces, classes, member functions, standard I/O streams, initialization lists, static variables, and `const` attributes through three distinct exercises:
* **Exercise 00 (Megaphone):** A simple string manipulation warm-up that converts input arguments to uppercase using standard C++ I/O streams.
* **Exercise 01 (My Awesome PhoneBook):** A functional terminal-based phonebook that demonstrates data encapsulation, array management without dynamic allocation (maximum of 8 contacts), and basic C++ formatting (`<iomanip>`).
* **Exercise 02 (The Job Of Your Dreams):** A reverse-engineering challenge requiring the recreation of a lost source file (`Account.cpp`) based on a provided header, test file, and execution logs.

## Instructions
Each exercise is isolated in its own directory (`ex00`, `ex01`, `ex02`). 

**Compilation:**
Navigate to the desired exercise folder and compile the code using `make`. The `Makefile` utilizes the `c++` compiler and enforces the mandatory strict compilation flags: `-Wall -Wextra -Werror -std=c++98`.

**Execution & Usage:**
* **ex00 (Megaphone):**
  ./megaphone [string1] [string2] ...

* **ex01 (PhoneBook):**
./phonebook

Once launched, follow the interactive console prompts. You can use three commands: `ADD` (to save a new contact), `SEARCH` (to display the formatted list and view specific contact details by index), and `EXIT` (to quit the program and lose all data).

* **ex02 (Account):**
make
./globalbank
 
Execute the generated binary and compare its output with the provided `19920104_091532.log` file to verify exact matching (excluding timestamps).


## Resources

**Documentation & References:**

* [cplusplus.com](https://cplusplus.com/) - Accessible examples for standard library components (especially `<iostream>` and `<iomanip>`).
* [geeksforgeeks.org/cpp/iomanip](https://www.geeksforgeeks.org/cpp/iomanip-in-cpp/) - Article about `<iomanip>` with practical formatting examples used in Exercise 01.

**AI Usage:**

* AI was utilized as a conceptual learning assistant during the development of this module. It was specifically used to clarify theoretical OOP concepts (such as class encapsulation, standard I/O streams formatting, and static class members), and to format this documentation. It was not used to generate the logic or the source code for the exercises themselves, ensuring the foundational learning process remained intact.
