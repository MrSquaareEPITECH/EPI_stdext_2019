/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strtrim.c
*/

#include "stringext.h"

char *strtrim(char *str, const char *list)
{
    char *ltrim = strltrim(str, list);
    char *trim = strrtrim(ltrim, list);

    return (trim);
}
