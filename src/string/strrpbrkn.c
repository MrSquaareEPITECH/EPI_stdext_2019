/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** strrpbrkn.c
*/

#include <stdlib.h>
#include <string.h>

#include "stringext.h"

char *strrpbrkn(const char *str, const char *reject)
{
    char *rev = strrev(strdup(str));
    size_t rpos = strpbrkn(rev, reject) - rev;
    size_t pos = strlen(str) - rpos - 1;

    free(rev);
    return ((char *)(&str[pos]));
}
