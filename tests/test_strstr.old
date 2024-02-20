/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** hello
*/

#include "test.h"

Test(strstr, empty_string){
    char *str = "";
    char *str2 = "World";
    cr_assert_eq(strstr(str, str2), my_strstr(str, str2));
}


Test(strstr, substring_exists){
    char *str = "Hello World";
    char *str2 = "World";
    cr_assert_eq(strstr(str, str2), my_strstr(str, str2));
}

Test(strstr, substring_does_not_exist){
    char *str = "Hello World";
    char *str2 = "Foo";
    cr_assert_eq(strstr(str, str2), my_strstr(str, str2));
}

Test(strstr, empty_substring){
    char *str = "Hello World";
    char *str2 = "";
    cr_assert_eq(strstr(str, str2), my_strstr(str, str2));
}

Test(strstr, substring_at_beginning){
    char *str = "Hello World";
    char *str2 = "Hello";
    cr_assert_eq(strstr(str, str2), my_strstr(str, str2));
}

Test(strstr, substring_at_end){
    char *str = "Hello World";
    char *str2 = "World";
    cr_assert_eq(strstr(str, str2), my_strstr(str, str2));
}
