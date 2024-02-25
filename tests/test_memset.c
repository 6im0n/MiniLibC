/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** test_memset
*/

#include "test.h"

Test(memset, simple_test) {
    char *str = malloc(sizeof(char) * 50);
    char *str2 = malloc(sizeof(char) * 50);
    char *test = memset(str, 'a', 5);
    char *test2 = my_memset(str2, 'a', 5);
    cr_assert_str_eq(test, test2);
    free(str);
    free(str2);
}

Test(memset, simple_test_pointeur) {
    char *str = malloc(sizeof(char) * 50);
    char *str2 = malloc(sizeof(char) * 50);
    memset(str, 'a', 5);
    my_memset(str2, 'a', 5);
    cr_assert_str_eq(str, str2);
    free(str);
    free(str2);
}

Test(memset, simple_test_pointeur_2) {
    char *str = malloc(sizeof(char) * 50);
    char *str2 = malloc(sizeof(char) * 50);
    memset(str, 'a', 5);
    memset(str+5, 'b', 5);
    my_memset(str2, 'a', 5);
    my_memset(str2+5, 'b', 5);
    cr_assert_str_eq(str, str2);
    free(str);
    free(str2);
}

Test(memset, simple_test2) {
    char *str = malloc(sizeof(char) * 50);
    char *str2 = malloc(sizeof(char) * 50);
    char *test = memset(str, 'a', 0);
    char *test2 = my_memset(str2, 'a', 0);
    cr_assert_str_eq(test, test2);
    free(str);
    free(str2);
}

Test(memset, simple_test3) {
    char *str = malloc(sizeof(char) * 50);
    char *str2 = malloc(sizeof(char) * 50);
    char *test = memset(str, 'a', 50);
    char *test2 = my_memset(str2, 'a', 50);
    cr_assert_str_eq(test, test2);
    free(str);
    free(str2);
}

Test(memset, small_str) {
    char *str = malloc(sizeof(char) * 5);
    char *str2 = malloc(sizeof(char) * 5);
    memset(str, 'a', 5);
    my_memset(str2, 'a', 5);
    cr_assert_str_eq(str, str2);
    free(str);
    free(str2);
}

Test(memset, int_array)
{
    int *str = malloc(sizeof(int) * 5);
    int *str2 = malloc(sizeof(int) * 5);
    int *test = memset(str, 42, 5);
    int *test2 = my_memset(str2, 42, 5);
    cr_assert_eq(test[4], test2[4]);
    free(str);
    free(str2);
}

Test(memset, int_array_ptr)
{
    int *str = malloc(sizeof(int) * 5);
    int *str2 = malloc(sizeof(int) * 5);
    memset(str, 42, 5);
    my_memset(str2, 42, 5);
    cr_assert_eq(str[4], str2[4]);
    free(str);
    free(str2);
}
