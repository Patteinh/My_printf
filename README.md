# my_printf - Recreating the printf Command 🖨️

Welcome to **my_printf**.

This project focuses on recreating the `printf` function from the C standard library, adhering to the C99 standard.

## Language and Tools 🛠️

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

- **Language:** C
- **Compilation:** Via Makefile, including `re`, `clean`, and `fclean` rules.
- **Binary Name:** libmy.a

## Project Overview 📜

The aim of this project is to develop a custom version of the `printf` function. The custom function, `my_printf`, should mimic the behavior of the standard `printf`, with some additional features and specific exclusions.

### Functionality

- Your `my_printf` function should be prototyped similarly to the standard `printf`.
- It should process most formatting flags, except for floating-point types, `%n` flag, and flags such as `"*"`, `"'"`, and `"I"`.
- Implement `%b` for printing unsigned numbers in binary base.
- Implement `%S` for printing character strings, where non-printable characters are represented in octal base.

### Usage

To use `my_printf` in your C projects, include the `libmy.a` library. The function can be called similarly to the standard `printf` function, with support for various format specifiers.

```c
#include "my.h"

int main() {
    my_printf("Your formatted string here");
    return 0;
}
```

## Examples:

### Exemple 1:

```
char str[5];
my_strcpy(str, "toto");
str[1] = 6;
my_printf("%S\n", str);
```
`Output:` `t\006to`

### Example 2:

`my_printf("%b", 42);`

`Output:` `101010`

*Note: The libC is forbidden, except for malloc, free, and write.*


## Installation and Usage 💾

1. Clone the repository.
2. Compile the program using the provided Makefile.
3. Include libmy.a in your C projects to use `my_printf`.
4. For detailed guidelines, refer to `my_printf.pdf`.

## License ⚖️

This project is released under the MIT License. See `LICENSE` for more details.
