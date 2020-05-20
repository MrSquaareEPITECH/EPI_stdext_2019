/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strrchrn.c
*/

#include <stddef.h>
#include <string.h>

#include "stringext.h"

char *strrchrn(const char *str, char chr) {
    for (long i = (long)(strlen(str)) - 1; i >= 0; --i)
        if (str[i] != chr)
            return ((char *)(&str[i]));
    return (NULL);
}
