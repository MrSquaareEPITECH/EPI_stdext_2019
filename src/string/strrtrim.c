/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strrtrim.c
*/

#include <string.h>

#include "stringext.h"

char *strrtrim(char *str, const char *list)
{
    char *ptr = strrpbrkn(str, list);

    if (ptr == NULL) {
        if (strrpbrk(str, list) == NULL)
            return (str);
        ptr = str - 1;
    }
    ptr[1] = '\0';
    return (str);
}
