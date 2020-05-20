/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strrstrn.c
*/

#include <stdlib.h>
#include <string.h>

#include "stringext.h"

char *strrstrn(const char *str, const char *needle)
{
    char *rev = strrev(strdup(str));
    char *rev_needle = strrev(strdup(needle));
    size_t rpos = strstrn(rev, rev_needle) - rev;
    size_t pos = strlen(str) - rpos - 1;

    free(rev_needle);
    free(rev);
    return ((char *)(&str[pos]));
}
