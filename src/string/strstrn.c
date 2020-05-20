/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strstrn.c
*/

#include <string.h>

#include "stringext.h"

char *strstrn(const char *str, const char *needle)
{
    char *npos = (char *)(str);

    for (char *pos = strstr(str, needle); (npos) && (npos == pos);
        npos = pos + strlen(needle), pos = strstr(npos, needle)) ;
    return (npos);
}
