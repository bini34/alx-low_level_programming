# Doubly Linked Lists Project

## Overview

This project focuses on the implementation of doubly linked lists in C. The project aims to enhance your understanding of doubly linked lists, their operations, and usage. The tasks involve creating functions to manipulate doubly linked lists, such as printing, counting elements, adding nodes at the beginning or end, freeing the list, retrieving a node at a specific index, calculating the sum of elements, and more.

## Learning Objectives

By the end of this project, you should be able to:

- Understand what a doubly linked list is.
- Use and implement various operations with doubly linked lists (deletion, insertion, etc.).
- Locate the right sources of information without excessive reliance on external help.

## Copyright and Plagiarism

You are expected to solve the tasks independently, meeting the learning objectives specified. Plagiarism is strictly forbidden, and any form of it will result in removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All files interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- Files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should follow the Betty style, and it will be checked using betty-style.pl and betty-doc.pl
- No global variables are allowed
- No more than 5 functions per file
- Only the C standard library functions allowed are malloc, free, printf, and exit
- Prototypes of all functions should be included in a header file named lists.h
- Don’t forget to push your header file
- All header files should be include guarded

## Project Structure

The project directory is organized as follows:

```
alx-low_level_programming/
|-- 0x17-doubly_linked_lists/
    |-- 0-print_dlistint.c
    |-- 1-dlistint_len.c
    |-- 2-add_dnodeint.c
    |-- 3-add_dnodeint_end.c
    |-- 4-free_dlistint.c
    |-- 5-get_dnodeint_at_index.c
    |-- 6-sum_dlistint.c
    |-- 7-insert_dnodeint.c
    |-- 8-delete_dnodeint.c
    |-- 100-password
    |-- 102-result
    |-- 103-keygen.c
    |-- lists.h
    |-- README.md
```

## How to Test

To test the functions, you can use the provided main.c files as examples. Compile the code using gcc, as shown in the examples. Ensure that your code adheres to the specified requirements and passes any provided test cases.

## Additional Tasks

### 100-password

Find the password for crackme4 and save it in the file 100-password.

### 102-result

Find the largest palindrome made from the product of two 3-digit numbers and save the result in the file 102-result.

### 103-keygen.c

Write a keygen for crackme5. The keygen should be used as follows:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5
./crackme5 username `./keygen5 username`
```

Ensure that the correct key is generated for the given username.
