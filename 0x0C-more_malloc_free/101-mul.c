#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *is_digit- check if string contain non digit
  *@s: string
  *
  *Return: 0
*/
int is_digit(char *s)
{
    while (*s)
    {
        if (!isdigit(*s))
            return (0);
        s++;
    }
    return (1);
}

int sti(char *s)
{
    int i = 0;
    while (*s)
    {
        i = i * 10 + (*s - '0');
        s++;
    }
    return (i);
}

int mult(int n1, int n2)
{
    return (n1 * n2);
}

int main(int argc, char *argv[])
{
    int n1, n2, result;

    if (argc != 3)
    {
        puts("Error");
        return (98);
    }

    n1 = sti(argv[1]);
    n2 = sti(argv[2]);

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        puts("Error");
        return (98);
    }

    result = mult(n1, n2);
    printf("%d\n", result);

    return (0);
}
