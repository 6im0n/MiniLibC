/*
** EPITECH PROJECT, 2024
** MiniLibC [SSH: 192.168.1.201]
** File description:
** hello
*/

#include "test.h"

Test(strlen, simple){
    char *str = "Hello World";
    cr_assert_eq(strlen(str), my_strlen(str));
}

Test(strlen, empty){
    char *str = "";
    cr_assert_eq(strlen(str), my_strlen(str));
}

Test(strlen, special_characters){
    char *str = "!@#$%^&*()";
    cr_assert_eq(strlen(str), my_strlen(str));
}

Test(strlen, numbers){
    char *str = "1234567890";
    cr_assert_eq(strlen(str), my_strlen(str));
}

Test(strlen, whitespace){
    char *str = "   ";
    cr_assert_eq(strlen(str), my_strlen(str));
}

Test(strlen, long_string){
    char *str = "This is a very long string that contains multiple words and characters.";
    cr_assert_eq(strlen(str), my_strlen(str));
}


