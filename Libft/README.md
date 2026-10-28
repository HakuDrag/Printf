This project has been created as part of the 42 curriculum by <callwood>.

Description

Libft is the first project at 42. The goal is to recreate a set of standard C library functions, as well as some additional useful functions, packaged into a static library (libft.a).

This project is a fundamental building block for future 42 C projects, helping to deepen our understanding of pointer manipulation, memory management, data structures (singly linked lists), and how standard C functions work under the hood.

Instructions

Compilation

To compile the library, use the provided Makefile:

make or make all: Compiles the source files and generates libft.a.

make clean: Removes all object (.o) files.

make fclean: Removes object files and the libft.a archive.

make re: Recompiles everything from scratch.

Usage

Include the header in your C files:

#include "libft.h"


Compile your program by linking your library:

gcc -Wall -Wextra -Werror your_program.c libft.a


Function Reference & Individual Mains

1. Libc Functions

ft_atoi

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_atoi("  -4242")); // Expected: -4242
    return (0);
}


ft_bzero

#include "libft.h"
#include <stdio.h>

int main(void) {
    char s[10] = "123456789";
    ft_bzero(s, 4);
    printf("Bzero done on first 4 bytes\n");
    return (0);
}


ft_calloc

#include "libft.h"
#include <stdlib.h>

int main(void) {
    int *tab = ft_calloc(5, sizeof(int));
    free(tab);
    return (0);
}


ft_isalnum

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_isalnum('A')); // Expected: non-zero
    return (0);
}


ft_isalpha

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_isalpha('z')); // Expected: non-zero
    return (0);
}


ft_isascii

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_isascii(127)); // Expected: non-zero
    return (0);
}


ft_isdigit

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_isdigit('5')); // Expected: non-zero
    return (0);
}


ft_isprint

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_isprint(' ')); // Expected: non-zero
    return (0);
}


ft_memchr

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%s\n", (char *)ft_memchr("hello", 'l', 5)); // Expected: llo
    return (0);
}


ft_memcmp

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_memcmp("abc", "abd", 3)); // Expected: < 0
    return (0);
}


ft_memcpy

#include "libft.h"
#include <stdio.h>

int main(void) {
    char dest[10];
    ft_memcpy(dest, "Hello", 6);
    printf("%s\n", dest); // Expected: Hello
    return (0);
}


ft_memmove

#include "libft.h"
#include <stdio.h>

int main(void) {
    char dest[] = "abcdef";
    ft_memmove(dest + 2, dest, 4);
    printf("%s\n", dest); // Expected: ababcd
    return (0);
}


ft_memset

#include "libft.h"
#include <stdio.h>

int main(void) {
    char dest[6];
    ft_memset(dest, 'A', 5);
    dest[5] = '\0';
    printf("%s\n", dest); // Expected: AAAAA
    return (0);
}


ft_strchr

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%s\n", ft_strchr("hello", 'e')); // Expected: ello
    return (0);
}


ft_strdup

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *dup = ft_strdup("Test");
    printf("%s\n", dup); // Expected: Test
    free(dup);
    return (0);
}


ft_strlcat

#include "libft.h"
#include <stdio.h>

int main(void) {
    char dest[15] = "Hello";
    ft_strlcat(dest, " 42", 15);
    printf("%s\n", dest); // Expected: Hello 42
    return (0);
}


ft_strlcpy

#include "libft.h"
#include <stdio.h>

int main(void) {
    char dest[10];
    ft_strlcpy(dest, "Hello", 10);
    printf("%s\n", dest); // Expected: Hello
    return (0);
}


ft_strlen

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%zu\n", ft_strlen("Hello 42")); // Expected: 8
    return (0);
}


ft_strncmp

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_strncmp("abc", "abd", 3)); // Expected: < 0
    return (0);
}


ft_strnstr

#include "libft.h"
#include <stdio.1>
#include <stdio.h>

int main(void) {
    printf("%s\n", ft_strnstr("Hello World", "World", 11)); // Expected: World
    return (0);
}


ft_strrchr

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%s\n", ft_strrchr("hello", 'l')); // Expected: lo
    return (0);
}


ft_tolower

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%c\n", ft_tolower('Z')); // Expected: z
    return (0);
}


ft_toupper

#include "libft.h"
#include <stdio.h>

int main(void) {
    printf("%c\n", ft_toupper('a')); // Expected: A
    return (0);
}


2. Additional Functions

ft_itoa

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *res = ft_itoa(-42);
    printf("%s\n", res); // Expected: -42
    free(res);
    return (0);
}


ft_putchar_fd

#include "libft.h"

int main(void) {
    ft_putchar_fd('A', 1); // Expected: A
    return (0);
}


ft_putendl_fd

#include "libft.h"

int main(void) {
    ft_putendl_fd("Hello 42", 1); // Expected: Hello 42 with newline
    return (0);
}


ft_putnbr_fd

#include "libft.h"

int main(void) {
    ft_putnbr_fd(-2147483648, 1); // Expected: -2147483648
    return (0);
}


ft_putstr_fd

#include "libft.h"

int main(void) {
    ft_putstr_fd("Hello 42", 1); // Expected: Hello 42
    return (0);
}


ft_split

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char **tab = ft_split("lorem*ipsum*dolor", '*');
    int i = 0;
    while (tab[i]) {
        printf("%s\n", tab[i]);
        free(tab[i]);
        i++;
    }
    free(tab);
    return (0);
}


ft_striteri

#include "libft.h"
#include <stdio.h>

void f(unsigned int i, char *c) {
    (void)i;
    if (*c >= 'a' && *c <= 'z') *c -= 32;
}

int main(void) {
    char str[] = "hello";
    ft_striteri(str, f);
    printf("%s\n", str); // Expected: HELLO
    return (0);
}


ft_strjoin

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *res = ft_strjoin("Hello ", "World");
    printf("%s\n", res); // Expected: Hello World
    free(res);
    return (0);
}


ft_strmapi

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char f(unsigned int i, char c) {
    return (c + i);
}

int main(void) {
    char *res = ft_strmapi("abcde", f);
    printf("%s\n", res); // Expected: acegi
    free(res);
    return (0);
}


ft_strtrim

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *res = ft_strtrim("xxHello 42xx", "x");
    printf("%s\n", res); // Expected: Hello 42
    free(res);
    return (0);
}


ft_substr

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *res = ft_substr("Hello 42", 6, 2);
    printf("%s\n", res); // Expected: 42
    free(res);
    return (0);
}


3. Bonus Functions (Linked Lists)

ft_lstadd_back

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    t_list *lst = ft_lstnew(strdup("First"));
    ft_lstadd_back(&lst, ft_lstnew(strdup("Second")));
    printf("%s\n", (char *)lst->next->content); // Expected: Second
    ft_lstclear(&lst, free);
    return (0);
}


ft_lstadd_front

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    t_list *lst = ft_lstnew(strdup("Second"));
    ft_lstadd_front(&lst, ft_lstnew(strdup("First")));
    printf("%s\n", (char *)lst->content); // Expected: First
    ft_lstclear(&lst, free);
    return (0);
}


ft_lstclear

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int main(void) {
    t_list *lst = ft_lstnew(strdup("Data"));
    ft_lstclear(&lst, free); // Clears and frees content
    return (0);
}


ft_lstdelone

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int main(void) {
    t_list *node = ft_lstnew(strdup("Data"));
    ft_lstdelone(node, free);
    return (0);
}


ft_lstiter

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void iter_f(void *content) {
    char *str = (char *)content;
    if (str[0] >= 'a' && str[0] <= 'z') str[0] -= 32;
}

int main(void) {
    t_list *lst = ft_lstnew(strdup("hello"));
    ft_lstiter(lst, iter_f);
    printf("%s\n", (char *)lst->content); // Expected: Hello
    ft_lstclear(&lst, free);
    return (0);
}


ft_lstlast

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    t_list *lst = ft_lstnew(strdup("First"));
    ft_lstadd_back(&lst, ft_lstnew(strdup("Last")));
    printf("%s\n", (char *)ft_lstlast(lst)->content); // Expected: Last
    ft_lstclear(&lst, free);
    return (0);
}


ft_lstmap

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *map_f(void *content) {
    return (strdup((char *)content));
}

int main(void) {
    t_list *lst = ft_lstnew(strdup("Test"));
    t_list *new_lst = ft_lstmap(lst, map_f, free);
    printf("%s\n", (char *)new_lst->content); // Expected: Test
    ft_lstclear(&lst, free);
    ft_lstclear(&new_lst, free);
    return (0);
}


ft_lstnew

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    t_list *node = ft_lstnew(strdup("Hello"));
    printf("%s\n", (char *)node->content); // Expected: Hello
    ft_lstdelone(node, free);
    return (0);
}


ft_lstsize

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    t_list *lst = ft_lstnew(strdup("1"));
    ft_lstadd_back(&lst, ft_lstnew(strdup("2")));
    printf("%d\n", ft_lstsize(lst)); // Expected: 2
    ft_lstclear(&lst, free);
    return (0);
}


Resources

Documentation & References:

man pages (e.g., man 3 strlen, man 3 memset)

C Reference - cppreference.com

Artificial Intelligence Usage:

AI was used to generate this README.md file along with individual example main code blocks for every function in the Libft library, and to document memory/list handling examples.
