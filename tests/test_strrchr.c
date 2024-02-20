/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** test_strrchr
*/

#include "test.h"

Test(strrchr, simple){
    char *str = "Hello Worldd World";
    int c = 'W';
    cr_assert_eq(strrchr(str,c), my_strrchr(str, c));
}

Test(strrchr, simple_single) {
    char *str = "Hello World";
    int c = 'W';
    cr_assert_eq(strrchr(str, c), my_strrchr(str, c));
}

Test(strrchr, simple_multiple) {
    char *str = "Hello Worldd World";
    int c = 'W';
    cr_assert_eq(strrchr(str, c), my_strrchr(str, c));
}

Test(strrchr, empty_string) {
    char *str = "";
    int c = 'a';
    cr_assert_eq(strrchr(str, c), my_strrchr(str, c));
}

Test(strrchr, character_not_found) {
    char *str = "Hello World";
    int c = 'x';
    cr_assert_eq(strrchr(str, c), my_strrchr(str, c));
}

Test(strrchr, null_character) {
    char *str = "Hello World";
    int c = '\0';
    char *my_str = my_strrchr(str, c);
    char *lib_str = strrchr(str, c);
    cr_assert_eq(lib_str, my_str);
}

Test(strrchr, null_character_mid) {
    char *str = "Hello\0World";
    int c = '\0';
    char *my_str = my_strrchr(str, c);
    char *lib_str = strrchr(str, c);
    cr_assert_eq(lib_str, my_str);
}

Test(strrchr, null_string) {
    char *str = "";
    int c = 'a';
    char *my_str = my_strrchr(str, c);
    char *lib_str = strrchr(str, c);
    if (my_str == NULL)
       my_str = "NULL";
    if (lib_str == NULL)
        lib_str = "NULL";
    cr_assert_str_eq(lib_str, my_str);
}

Test(strrchr, large_string) {
    char *str =  "zzzzzzzzzzzzzz zzzzzzzzzzzzz zzzzzzz zzz zz";
    int c = 'z';
    cr_assert_eq(strrchr(str, c), my_strrchr(str, c));
}

Test(strrchr, diverse_characters) {
    char *str = "Hello, world! 123#@$%^&*()";
    int c = '#';
    cr_assert_eq(strrchr(str, c), my_strrchr(str, c));
}

