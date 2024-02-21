/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** hello
*/

#include "test.h"

Test(strncmp, simple){
    char *str = "Hello World";
    int test1 = strcmp(str, str);
    int test2 = my_strcmp(str, str);
    cr_assert_eq(test1, test2);
}

Test(strncmp, equal_strings) {
    char *str1 = "Hello World";
    char *str2 = "Hello World";

    int test1 = strncmp(str1, str2, strlen(str1));
    int test2 = my_strncmp(str1, str2, strlen(str1));

    cr_assert_eq(test1, test2);
}

Test(strncmp, unequal_strings) {
    char *str1 = "Hello";
    char *str2 = "World";

    int test1 = strncmp(str1, str2, strlen(str1));
    int test2 = my_strncmp(str1, str2, strlen(str1));

    cr_assert_eq(test1, test2);
}

Test(strncmp, different_lengths) {
    char *str1 = "Hello";
    char *str2 = "Hello World";

    int test1 = strncmp(str1, str2, strlen(str1));
    int test2 = my_strncmp(str1, str2, strlen(str1));

    cr_assert_eq(test1, test2);
}


Test(strncmp, partial_comparison) {
    char *str1 = "Hello World";
    char *str2 = "Hello";

    int test1 = strncmp(str1, str2, 5);
    int test2 = my_strncmp(str1, str2, 5);

    cr_assert_eq(test1, test2);
}

Test(strncmp, null_terminator_first_string) {
    char *str1 = "Hello";
    char *str2 = "Hello World";

    int test1 = strncmp(str1, str2, 10);
    int test2 = my_strncmp(str1, str2, 10);

    cr_assert_eq(test1, test2);
}

Test(strncmp, null_terminator_first_string_2_bytes) {
    char *str1 = "Hello";
    char *str2 = "Hello World";

    int test1 = strncmp(str1, str2, 2);
    int test2 = my_strncmp(str1, str2, 2);

    cr_assert_eq(test1, test2);
}



Test(strncmp, null_terminator_second_string) {
    char *str1 = "Hello World";
    char *str2 = "Hello";

    int test1 = strncmp(str1, str2, 10);
    int test2 = my_strncmp(str1, str2, 10);

    cr_assert_eq(test1, test2);
}

Test(strncmp, no_s2) {
    char *str1 = "Hello World";
    char *str2 = "";

    int test1 = strncmp(str1, str2, 10);
    int test2 = my_strncmp(str1, str2, 10);

    cr_assert_eq(test1, test2);
}


Test(strncmp, no_s1) {
    char *str1 = "";
    char *str2 = "ee";

    int test1 = strncmp(str1, str2, 10);
    int test2 = my_strncmp(str1, str2, 10);

    cr_assert_eq(test1, test2);
}

Test(strncmp, no_s1_s2) {
    char *str1 = "";
    char *str2 = "";

    int test1 = strncmp(str1, str2, 10);
    int test2 = my_strncmp(str1, str2, 10);

    cr_assert_eq(test1, test2);
}

Test(strncmp, multy_ocurence2){
    char *str1 = "babababababab";
    char *str2 = "babababababab";
    int test1 = strncmp(str1, str2, 3);
    int test2 = my_strncmp(str1, str2, 3);
    cr_assert_eq(test1, test2);
}

