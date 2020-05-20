/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** test_strrchrn.c
*/

#include <criterion/criterion.h>

#include "stringext.h"

Test(strrnchr, valid)
{
    char *param1 = " Hello, World! ";
    char param2 = ' ';
    char *actual = NULL;
    char *expected = "! ";

    actual = strrchrn(param1, param2);
    cr_assert_str_eq(actual, expected);
}
