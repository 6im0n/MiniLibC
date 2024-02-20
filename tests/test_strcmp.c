/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** hello
*/

#include "test.h"

Test(strcmp, simple){
    char *str = "Hello World";
    cr_assert_eq(strcmp(str, str), my_strcmp(str, str));
}

Test(strcmp, empty_strings){
    char *str1 = "";
    char *str2 = "";
    cr_assert_eq(strcmp(str1, str2), my_strcmp(str1, str2));
}

Test(strcmp, different_strings){
    char *str1 = "Hello";
    char *str2 = "World";
    cr_assert_eq(strcmp(str1, str2), -15);
    cr_assert_eq(-15, my_strcmp(str1, str2));
}

Test(strcmp, one_empty_string){
    char *str1 = "";
    char *str2 = "Hello";
    cr_assert_eq(strcmp(str1, str2), -72);
    cr_assert_eq(-72, my_strcmp(str1, str2));
}

Test(strcmp, one_empty_string2){
    char *str1 = "Hello";
    char *str2 = "";
    cr_assert_eq(strcmp(str1, str2), 72);
    cr_assert_eq(72, my_strcmp(str1, str2));
}

Test(strcmp, case_sensitive){
    char *str1 = "Hello";
    char *str2 = "hello";
    cr_assert_eq(strcmp(str1, str2), -32);
    cr_assert_eq(-32, my_strcmp(str1, str2));
}

Test(strcmp, equal_strings){
    char *str1 = "Hello";
    char *str2 = "Hello";
    cr_assert_eq(strcmp(str1, str2), 0);
    cr_assert_eq(0, my_strcmp(str1, str2));
}

Test(strcmp, long_strings){
    char *str1 = "This is a long string";
    char *str2 = "This is a long string";
    cr_assert_eq(strcmp(str1, str2), 0);
    cr_assert_eq(0, my_strcmp(str1, str2));
}

Test(strcmp, different_lengths){
    char *str1 = "Hello";
    char *str2 = "Hello World";
    cr_assert_eq(strcmp(str1, str2), -32);
    cr_assert_eq(-32, my_strcmp(str1, str2));
}

Test(strcmp, different_lengths2){
    char *str1 = "Hello World";
    char *str2 = "Hello";
    cr_assert_eq(strcmp(str1, str2), 32);
    cr_assert_eq(32, my_strcmp(str1, str2));
}

Test(strcmp, one_letter){
    char *str1 = "a";
    char *str2 = "a";
    cr_assert_eq(strcmp(str1, str2), 0);
    cr_assert_eq(0, my_strcmp(str1, str2));
}

Test(strcmp, special_characters) {
    char *str1 = "Hello, world! \n\t";
    char *str2 = "Hello, world! \n\t";
    int res = strcmp(str1, str2);
    int my_res = my_strcmp(str1, str2);
    cr_assert_eq(res, my_res);
}

Test(strcmp, non_printable_characters) {
    char *str1 = "Hello\0World";
    char *str2 = "Hello\0World";
    int res = strcmp(str1, str2);
    int my_res = my_strcmp(str1, str2);
    cr_assert_eq(res, my_res);
}

Test(strcmp, whitespace_differences) {
    char *str1 = "Hello World";
    char *str2 = "Hello  World";
    int res = strcmp(str1, str2);
    int my_res = my_strcmp(str1, str2);
    cr_assert_eq(res, my_res);
}

Test(strcmp, numeric_characters) {
    char *str1 = "12345";
    char *str2 = "54321";
    int res = strcmp(str1, str2);
    int my_res = my_strcmp(str1, str2);
    cr_assert_eq(res, my_res);
}
