/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** test_strpbrkn.c
*/

#include <criterion/criterion.h>

#include "stringext.h"

Test(strpbrkn, valid)
{
    char *param1 = " \tHello, World!\t ";
    char *param2 = " \t";
    char *actual = NULL;
    char *expected = "Hello, World!\t ";

    actual = strpbrkn(param1, param2);
    cr_assert_str_eq(actual, expected);
}
