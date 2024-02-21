/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** test_strcasecmp
*/

#include "test.h"


Test(strcasecmp, simple){
    char *str = "Hello World";
    int test1 = strcasecmp(str, str);
    int test2 = my_strcasecmp(str, str);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, empty_strings){
    char *str1 = "";
    char *str2 = "";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, different_strings){
    char *str1 = "Hello";
    char *str2 = "World";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, one_empty_string){
    char *str1 = "";
    char *str2 = "Hello";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, one_empty_string2){
    char *str1 = "Hello";
    char *str2 = "";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, case_sensitive){
    char *str1 = "Hello";
    char *str2 = "hello";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, equal_strings){
    char *str1 = "Hello";
    char *str2 = "Hello";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, long_strings){
    char *str1 = "This is a long string";
    char *str2 = "This is a long string";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, different_lengths){
    char *str1 = "Hello";
    char *str2 = "Hello World";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, different_lengths2){
    char *str1 = "Hello World";
    char *str2 = "Hello";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, case_sensitive2){
    char *str1 = "Hello";
    char *str2 = "hello";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, case_sensitive3){
    char *str1 = "hello";
    char *str2 = "Hello";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, case_sensitive4){
    char *str1 = "aaaaaaaaa";
    char *str2 = "aaaaAaaaa";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, case_sensitive5){
    char *str1 = "aaaaAaaaa";
    char *str2 = "aaaaaaaaa";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}


Test(strcasecmp, case_sensitive6){
    char *str1 = "aaaaAaaaa";
    char *str2 = "aaaaAaaaa";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}

Test(strcasecmp, case_sensitive_full_test){
    char *str1 = "199////0y";
    char *str2 = "199////0Y";
    int test1 = strcasecmp(str1, str2);
    int test2 = my_strcasecmp(str1, str2);
    cr_assert_eq(test1, test2);
}