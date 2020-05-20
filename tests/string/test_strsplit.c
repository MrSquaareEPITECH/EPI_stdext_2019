/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** test_strsplit.c
*/

#include <criterion/criterion.h>

#include "stringext.h"

Test(strsplit, valid)
{
    char *param1 = " This \"is a\" sentence ";
    char *param2 = " ";
    char **actual = NULL;
    char expected[][20] = {
        "This", "\"is", "a\"", "sentence"
    };

    actual = strsplit(param1, param2);
    for (int i = 0; i < 4; ++i)
        cr_assert_str_eq(actual[i], expected[i]);
}
