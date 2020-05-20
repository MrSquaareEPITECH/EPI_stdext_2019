/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strrtrim.c
*/

#include <string.h>

#include "stringext.h"

char *strrtrim(const char *str, const char *list)
{
    char *pos = strrpbrkn(str, list);
    char *rtrim = strndup(str, pos - str + 1);

    return (rtrim);
}
