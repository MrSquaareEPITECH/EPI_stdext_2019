/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** test_strsplitj.c
*/

#include <criterion/criterion.h>

#include "stringext.h"

Test(strsplitj, valid)
{
    char *param1 = " This \"is a\" sentence ";
    char *param2 = " ";
    char *param3 = "\"";
    char **actual = NULL;
    char expected[][20] = {
        "This", "\"is a\"", "sentence"
    };

    actual = strsplitj(param1, param2, param3);
    for (int i = 0; i < 3; ++i)
        cr_assert_str_eq(actual[i], expected[i]);
}
