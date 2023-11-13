# Project Title: C - Dynamic Libraries

## Table of Contents

- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
  - [C](#c)
  - [Bash](#bash)
- [Tasks](#tasks)
  - [0. A library is not a luxury but one of the necessities of life](#0-a-library-is-not-a-luxury-but-one-of-the-necessities-of-life)
  - [1. Without libraries what have we? We have no past and no future](#1-without-libraries-what-have-we-we-have-no-past-and-no-future)
  - [2. Let's call C functions from Python](#2-lets-call-c-functions-from-python)
  - [3. Code injection: Win the Giga Millions!](#3-code-injection-win-the-giga-millions)
- [Conclusion](#conclusion)
- [Copyright](#copyright)

## Description

This project focuses on dynamic libraries in C programming, exploring their creation, usage, and the differences between static and shared libraries. The tasks involve creating a dynamic library, using scripts to automate library creation, and even calling C functions from Python.

## Learning Objectives

At the end of this project, you should be able to:

- Understand what a dynamic library is and how it works.
- Create dynamic libraries on Linux.
- Use environment variables like `$LD_LIBRARY_PATH`.
- Differentiate between static and shared libraries.
- Employ basic utilities like `nm`, `ldd`, and `ldconfig` for library management.

## Requirements

### C

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line.
- A `README.md` file at the root of the project is mandatory.
- Code should adhere to the Betty style.
- No more than 5 functions per file.
- No use of global variables.
- Do not use the standard library; exceptions include `_putchar`.
- Prototypes of all functions and `_putchar` should be included in a header file named `main.h`.

### Bash

- Allowed editors: vi, vim, emacs
- All scripts tested on Ubuntu 20.04 LTS
- All files must end with a new line.
- The first line of all scripts should be `#!/bin/bash`.
- A `README.md` file at the root of the project describing each script is mandatory.
- All script files must be executable.

## Tasks

### [0. A library is not a luxury but one of the necessities of life](./libdynamic.so)

Create the dynamic library `libdynamic.so` containing specified functions. If any functions are not implemented, provide empty ones with the correct prototype.

Example usage:

```bash
$ ls -la libdynamic.so
-rwxrwxr-x 1 user user 13632 Jan  7 06:25 libdynamic.so

$ nm -D libdynamic.so
# Output showing symbols in the library
```

### [1. Without libraries what have we? We have no past and no future](./1-create_dynamic_lib.sh)

Create a script that generates a dynamic library called `liball.so` from all `.c` files in the current directory.

Example usage:

```bash
$ ls *.c
abs.c   isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c  strcmp.c  strlen.c   strncpy.c  strspn.c
atoi.c  isdigit.c  isupper.c  memset.c  puts.c     strchr.c  strcpy.c  strncat.c  strpbrk.c  strstr.c

$ ./1-create_dynamic_lib.sh
```

### [2. Let's call C functions from Python](./100-operations.so)

Create a dynamic library, `100-operations.so`, that contains C functions callable from Python. Python script `100-tests.py` demonstrates calling these functions.

Example usage:

```bash
$ python3 100-tests.py
# Output showing results of C functions called from Python
```

### [3. Code injection: Win the Giga Millions!](./101-make_me_win.sh)

Create a shell script, `101-make_me_win.sh`, for code injection to make the user win the Giga Millions jackpot. The script should be no longer than 3 lines, without using certain characters.

Example usage:

```bash
$ . ./101-make_me_win.sh
```

## Conclusion

This project emphasizes understanding dynamic libraries in C, their creation, and interaction with other languages. Tasks involve creating libraries, scripts for automation, and even code injection for a fictional lottery.

## Copyright

© 2023 ALX, All rights reserved.
