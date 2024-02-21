/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** test_strbprk
*/

#include "test.h"

Test(strpbrk, equal_strings) {
    char *str1 = "Hello World";
    char *str2 = "Hello World";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, unequal_strings) {
    char *str1 = "Hello";
    char *str2 = "World";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, different_lengths) {
    char *str1 = "Hello";
    char *str2 = "Hello World";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, partial_comparison) {
    char *str1 = "Hello World";
    char *str2 = "Hello";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, null_terminator_first_string) {
    char *str1 = "Hello";
    char *str2 = "Hello World";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, str_1_2){
    char *str1 = "Hello World";
    char *str2 = "wlo";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, null_terminator_second_string) {
    char *str1 = "Hello World";
    char *str2 = "Hello";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, null_terminator_first_string_2_bytes) {
    char *str1 = "Hello";
    char *str2 = "ello";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}


Test(strpbrk, special_char){
    char *str1 = "aaBaaa";
    char *str2 = "Baaaaa";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, special_char2){
    char *str1 = "aaBaaa";
    char *str2 = "B";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, empty){
    char *str1 = "aaBaaa";
    char *str2 = "";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, empty2){
    char *str1 = "";
    char *str2 = "aaaa";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, empty3){
    char *str1 = "";
    char *str2 = "";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strpbrk, special_charactere){
    char *str1 = "090190291902";
    char *str2 = "1";

    char *test1 = strpbrk(str1, str2);
    char *test2 = my_strpbrk(str1, str2);

    cr_assert_eq(test1, test2);
}
