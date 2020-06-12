/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** main.c
*/

#include <stdio.h>
#include <stringext.h>

int main(void)
{
    char string1[] = " \t";
    char string2[] = "Hello, World! \t";

    char *result1 = strltrim(string1, "\t ");
    char *result2 = strrtrim(string2, "\t ");

    printf("result1: %s$\n", result1);
    printf("result2: %s$\n", result2);

    return (0);
}
