/*
** EPITECH PROJECT, 2020
** EPI_stdext_2019
** File description:
** test_strrstrn.c
*/

#include <criterion/criterion.h>

#include "stringext.h"

Test(strrstrn, valid)
{
    char *param1 = " \tHello, World!\t ";
    char *param2 = "World!\t ";
    char *actual = NULL;
    char *expected = " World!\t ";

    actual = strrstrn(param1, param2);
    cr_assert_str_eq(actual, expected);
}
