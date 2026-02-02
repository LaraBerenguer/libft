*This project was created as part of the 42 curriculum by larberen.*

# Libft

## Description

`libft` is the first project at 42 cursus. The goal is to recreate a set of standard C library functions, as well as some additional utility functions. This project deepens the understanding of how these core functions work, memory management, and the basics of creating a reusable C library.

The library is divided into three main parts:
1.  **Standard C Functions:** Reimplementations of functions from `<string.h>`, `<stdlib.h>`, and `<ctype.h>`.
2.  **Additional Functions:** A collection of useful functions not found in the standard libraries, for tasks like string manipulation, and writing to file descriptors.
3.  **Linked List Functions:** A set of functions to create and manage singly linked lists.

## Library Functions

### Standard C Library Functions

- [`ft_isalpha`](ft_isalpha.c): Checks for an alphabetic character.
- [`ft_isdigit`](ft_isdigit.c): Checks for a digit (0-9).
- [`ft_isalnum`](ft_isalnum.c): Checks for an alphanumeric character.
- [`ft_isascii`](ft_isascii.c): Checks whether a character is a 7-bit US-ASCII character.
- [`ft_isprint`](ft_isprint.c): Checks for any printable character.
- [`ft_strlen`](ft_strlen.c): Calculates the length of a string.
- [`ft_memset`](ft_memset.c): Fills memory with a constant byte.
- [`ft_bzero`](ft_bzero.c): Writes zeroes to a byte string.
- [`ft_memcpy`](ft_memcpy.c): Copies a memory area.
- [`ft_memmove`](ft_memmove.c): Copies a memory area, handling overlaps.
- [`ft_strlcpy`](ft_strlcpy.c): Size-bounded string copying.
- [`ft_strlcat`](ft_strlcat.c): Size-bounded string concatenation.
- [`ft_toupper`](ft_toupper.c): Converts a lower-case letter to the corresponding upper-case letter.
- [`ft_tolower`](ft_tolower.c): Converts an upper-case letter to the corresponding lower-case letter.
- [`ft_strchr`](ft_strchr.c): Locates the first occurrence of a character in a string.
- [`ft_strrchr`](ft_strrchr.c): Locates the last occurrence of a character in a string.
- [`ft_strncmp`](ft_strncmp.c): Compares two strings up to n characters.
- [`ft_memchr`](ft_memchr.c): Scans memory for a character.
- [`ft_memcmp`](ft_memcmp.c): Compares two memory areas.
- [`ft_strnstr`](ft_strnstr.c): Locates a substring in a string, where the search is limited to n bytes.
- [`ft_atoi`](ft_atoi.c): Converts a string to an integer.
- [`ft_calloc`](ft_calloc.c): Allocates memory for an array and initializes it to zero.
- [`ft_strdup`](ft_strdup.c): Duplicates a string.

### Additional Functions

- [`ft_substr`](ft_substr.c): Returns a substring from a string.
- [`ft_strjoin`](ft_strjoin.c): Concatenates two strings into a new string.
- [`ft_strtrim`](ft_strtrim.c): Trims leading and trailing characters from a string.
- [`ft_split`](ft_split.c): Splits a string into an array of strings using a delimiter.
- [`ft_itoa`](ft_itoa.c): Converts an integer to a string.
- [`ft_strmapi`](ft_strmapi.c): Applies a function to each character of a string to create a new string.
- [`ft_striteri`](ft_striteri.c): Applies a function to each character of a string.
- [`ft_putchar_fd`](ft_putchar_fd.c): Outputs a character to a given file descriptor.
- [`ft_putstr_fd`](ft_putstr_fd.c): Outputs a string to a given file descriptor.
- [`ft_putendl_fd`](ft_putendl_fd.c): Outputs a string to a given file descriptor, followed by a newline.
- [`ft_putnbr_fd`](ft_putnbr_fd.c): Outputs an integer to a given file descriptor.

### Linked List Functions

- [`ft_lstnew`](ft_lstnew.c): Creates a new list element.
- [`ft_lstadd_front`](ft_lstadd_front.c): Adds an element to the front of a list.
- [`ft_lstsize`](ft_lstsize.c): Counts the number of elements in a list.
- [`ft_lstlast`](ft_lstlast.c): Returns the last element of the list.
- [`ft_lstadd_back`](ft_lstadd_back.c): Adds an element to the end of a list.
- [`ft_lstdelone`](ft_lstdelone.c): Deletes a single element of a list.
- [`ft_lstclear`](ft_lstclear.c): Deletes and frees the entire list.
- [`ft_lstiter`](ft_lstiter.c): Applies a function to each element of a list.
- [`ft_lstmap`](ft_lstmap.c): Creates a new list by applying a function to each element of an old list.

## Instructions

### Compilation

To compile the library, navigate to the root of the repository and run the `make` command.

```sh
make
```

This will compile all the source files into object files (`.o`) and create a static library named `libft.a`.

The [Makefile](Makefile) includes the following rules:
- `all`: Compiles the library `libft.a`. This is the default rule.
- `clean`: Removes all the object files (`.o`).
- `fclean`: Removes the object files and the `libft.a` library.
- `re`: Re-compiles the library from scratch (`fclean` + `all`).

### Usage

To use the library in your own C project:
1.  Include the header file `libft.h` in your source files.
    ```c
    #include "libft.h"
    ```
2.  When compiling your project, link the `libft` library.
    ```sh
    cc your_project.c -L. -lft -o your_project_executable
    ```
    - `-L.` tells the compiler to look for libraries in the current directory.
    - `-lft` links the `libft.a` library.

### Testing

This project does not include a dedicated testing framework. However, each function file contains a commented-out `main` function that was used for development and testing. A `main_test.c` file, which aggregates all these tests, can be provided during evaluation to demonstrate the functionality of each part of the library.

1.  Make sure the header file `libft.h` in your source files.
    ```c
    #include "libft.h"
    ```
2.  When compiling the test, link the `libft` library.
    ```sh
    cc main_test.c libft/libft.a -Ilibft
    ```
3. Execute.
    ```sh
    ./a.out
    ```