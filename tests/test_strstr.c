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
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, empty_string2){
    char *str = "Hello World";
    char *str2 = "";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, empty_string3){
    char *str = "";
    char *str2 = "";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, simple_string){
    char *str = "Hello World";
    char *str2 = "World";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, uniq_char){
    char *str = "Hello World";
    char *str2 = "W";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, string_not_found){
    char *str = "Hello World";
    char *str2 = "Foo";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, substring_at_start){
    char *str = "Hello World";
    char *str2 = "Hello";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, substring_at_end){
    char *str = "Hello World";
    char *str2 = "World";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, substring_in_middle){
    char *str = "Hello World";
    char *str2 = "lo W";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, long_string) {
    char *str = "This is a very long string with a substring to be found.";
    char *str2 = "substring";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, multiple_occurrences) {
    char *str = "Hello World Hello World Hello";
    char *str2 = "World";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, substring_at_very_start) {
    char *str = "World";
    char *str2 = "W";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strstr, substring_at_very_end) {
    char *str = "Hello";
    char *str2 = "o";
    char *test1 = strstr(str, str2);
    char *test2 = my_strstr(str, str2);
    cr_assert_eq(test1, test2);
}
