/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strltrim.c
*/

#include <string.h>

#include "stringext.h"

char *strltrim(const char *str, const char *list)
{
    char *pos = strpbrkn(str, list);
    char *ltrim = strdup(pos);

    return (ltrim);
}
