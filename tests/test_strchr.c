/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** test_strchr
*/

#include "test.h"

Test(strchr, simple){
    char *str = "Hello World";
    int c = 'W';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, empty){
    char *str = "";
    int c = 'W';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, special_characters){
    char *str = "!@#$%^&*()";
    int c = '%';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, numbers){
    char *str = "1234567890";
    int c = '5';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, whitespace){
    char *str = "   ";
    int c = ' ';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, long_string){
    char *str = "This is a very long string that contains multiple words and characters.";
    int c = 'l';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, last_character){
    char *str = "This is a very long string that contains multiple words and characters.";
    int c = '\0';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, not_found){
    char *str = "This is a very long string that contains multiple words and characters.";
    int c = 'z';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, multiple_occurrences){
    char *str = "Hello World";
    int c = 'o';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, case_sensitive){
    char *str = "Hello World";
    int c = 'w';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, null_terminated){
    char *str = "Hello\0World";
    int c = '\0';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}

Test(strchr, non_printable_characters){
    char *str = "\t\n\r";
    int c = '\t';
    cr_assert_eq(strchr(str,c), my_strchr(str, c));
}
