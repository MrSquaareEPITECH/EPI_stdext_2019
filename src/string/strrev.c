/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strrev.c
*/

#include <string.h>

#include "stringext.h"

char *strrev(char *str)
{
    for (size_t i = 0, j = strlen(str) - 1; i < j; ++i, --j) {
        char swap = str[i];
        str[i] = str[j];
        str[j] = swap;
    }
    return (str);
}
