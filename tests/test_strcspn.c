/*
** EPITECH PROJECT, 2024
** MiniLibC [SSH: 192.168.1.201]
** File description:
** hello
*/

#include "test.h"

Test(strcspn, simple){
    char *str = "Hello World";
    char *str2 = "World";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, empty){
    char *str = "";
    char *str2 = "World";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, empty_2){
    char *str = "";
    char *str2 = "";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, empty_3){
    char *str = "";
    char *str2 = " ";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, special_characters){
    char *str = "!@#$%^&*()";
    char *str2 = "World";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, numbers){
    char *str = "1234567890";
    char *str2 = "World";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, whitespace){
    char *str = "   ";
    char *str2 = "World";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, long_string){
    char *str = "This is a very long string that contains multiple words and characters.";
    char *str2 = "World";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, str_1_2){
    char *str = "Hello World";
    char *str2 = "Hello World";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, str_1_3){
    char *str = "Hello World";
    char *str2 = "World";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, null_terminator_second_string) {
    char *str = "Hello World";
    char *str2 = "Hello";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}
Test(strcspn, special_char){
    char *str1 = "aaBaaa";
    char *str2 = "Baaaaa";
    size_t test1 = strcspn(str1, str2);
    size_t test2 = my_strcspn(str1, str2);

    cr_assert_eq(test1, test2);
}

Test(strcspn, null_terminator_first_string_2_bytes) {
    char *str = "Hello";
    char *str2 = "wllo";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, null_terminator_first_string) {
    char *str = "Hello";
    char *str2 = "Hello World";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, mutiple_same_character) {
    char *str = "Hello World";
    char *str2 = "oooooooooooooooooooo";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, Null_in_midle_of_string) {
    char *str = "Hello\0eee";
    char *str2 = "oooooooooooooooooooo";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, Null_in_midle_of_string_2) {
    char *str = "Hello\0eee";
    char *str2 = "e";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, Null_in_midle_of_string_3) {
    char *str = "";
    char *str2 = "e\0";
    size_t test1 = strcspn(str, str2);
    size_t test2 = my_strcspn(str, str2);
    cr_assert_eq(test1, test2);
}

Test(strcspn, special_charactere){
    char *str1 = "090190291902";
    char *str2 = "1";
    size_t test1 = strcspn(str1, str2);
    size_t test2 = my_strcspn(str1, str2);

    cr_assert_eq(test1, test2);
}
