*This project has been created as part of the 42 curriculum by <callwood>.*

---

## Description

`ft_printf` est un projet de l'école 42 dont l'objectif est de recoder la fonction `printf` de la bibliothèque standard C. Le projet consiste à réécrire une fonction gérant un nombre variable d'arguments (`variadic functions`) tout en reproduisant le comportement de formatage de chaînes de caractères.

Ce projet inclut :
* Les conversions obligatoires (`%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`).

---

## Instructions

### Compilation
Le projet se compile à l'aide d'un `Makefile`. Les règles principales sont :
* `make` : Compile la bibliothèque `libftprintf.a`.
* `make clean` : Supprime les fichiers objets (`.o`).
* `make fclean` : Supprime les fichiers objets et la bibliothèque.
* `make re` : Nettoie et recompile tout le projet.

### Exécution avec le fichier de test (`main.c`)
Vous pouvez tester le projet en créant un fichier `main.c` à la racine :

```c
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    // Test du flag personnalisé %a
    ft_printf("--- Test du flag %a ---\n");
    ft_printf("Mon ft_printf : %a\n\n");

    // Test des flags classiques
    ft_printf("Caractere : %c\n", 'A');
    ft_printf("Chaine : %s\n", "Hello 42 !");
    ft_printf("Entier : %d\n", -42);
    ft_printf("Hexadecimal : %x\n", 255);
    
    return (0);
}
