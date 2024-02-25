/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** test_memmove
*/

#include "test.h"

Test(memmove, simple)
{
    char src[] = "Hello, World!";
    char dest[] = "*************";
    char src2[] = "Hello, World!";
    char dest2[] = "*************";

    memmove(dest + 7, dest, 7);
    my_memmove(dest2 + 7, dest2, 7);

    cr_assert_str_eq(dest, dest2);
}

Test(memmove, int_array_overlapp)
{
    int str1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int str3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    memmove(str1 + 2, str1, 5 * sizeof(int));
    my_memmove(str3 + 2, str3, 5 * sizeof(int));

    cr_assert_arr_eq(str1, str3, 10);
}

Test(memmove, char_array_overlapp)
{
    char str1[10] = "123456789";
    char str3[10] = "123456789";

    memmove(str1 + 2, str1, 5);
    my_memmove(str3 + 2, str3, 5);

    cr_assert_str_eq(str1, str3);
}

Test(memmove, char_array_overlapp2)
{
    char str1[10] = "123456789";
    char str3[10] = "123456789";

    memmove(str1 + 2, str1, 5);
    my_memmove(str3 + 2, str3, 5);

    cr_assert_str_eq(str1, str3);
}


Test(memmove, simple_no_overlap)
{
    char src[] = "Hello, World!";
    char *dest = malloc(14);
    char src2[] = "Hello, World!";
    char *dest2 = malloc(14);

    memmove(dest, src, 13);
    my_memmove(dest2, src2, 13);

    cr_assert_str_eq(dest, dest2);
    free(dest);
    free(dest2);
}

Test(memmove, simple_no_overlap2)
{
    char src[] = "Hello, World!";
    char *dest = malloc(14);
    char src2[] = "Hello, World!";
    char *dest2 = malloc(14);

    memmove(dest, src, 2);
    my_memmove(dest2, src2, 2);

    cr_assert_str_eq(dest, dest2);
    free(dest);
    free(dest2);
}