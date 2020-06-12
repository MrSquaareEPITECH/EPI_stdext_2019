/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strltrim.c
*/

#include <string.h>

#include "stringext.h"

char *strltrim(char *str, const char *list)
{
    char *ptr = strpbrkn(str, list);
    size_t len = strlen(str);

    if (ptr == NULL) {
        if (strpbrk(str, list) == NULL)
            return (str);
        ptr = &str[len];
    }
    for (int i = 0; ptr <= &str[len]; ++ptr, ++i)
        str[i] = ptr[0];
    return (str);
}
