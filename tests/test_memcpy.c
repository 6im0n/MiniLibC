/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** test_memcpy
*/

#include "test.h"

Test(memcpy, simple_test) {
    char *str = malloc(sizeof(char) * 12);
    char *str2 = malloc(sizeof(char) * 12);
    char *test = memcpy(str, "Hello World", 11);
    char *test2 = my_memcpy(str2, "Hello World", 11);
    cr_assert_str_eq(test, test2);
    free(str);
    free(str2);
}

Test(memcpy, simple_test_pointeur) {
    char *str = malloc(sizeof(char) * 12);
    char *str2 = malloc(sizeof(char) * 12);
    memcpy(str, "Hello World", 11);
    my_memcpy(str2, "Hello World", 11);
    cr_assert_str_eq(str, str2);
    free(str);
    free(str2);
}

Test(memcpy, simple_test_1) {
    char source[] = "H";
    char dest[12];
    char source2[] = "H";
    char dest2[12];
    
    memcpy(dest, source, 12);
    my_memcpy(dest2, source2, 12);
    cr_assert_str_eq(dest2, dest);
}

Test(memcpy, simple_test_2) {
    char source[] = "Hello World";
    char dest[12];
    char source2[] = "Hello World";
    char dest2[12];
    
    memcpy(dest, source, 12);
    my_memcpy(dest2, source2, 12);
    cr_assert_str_eq(dest2, dest);
}

Test(memcpy, complex_test) {
    char source[] = "This is a complex test";
    char dest[50];
    char source2[] = "This is a complex test";
    char dest2[50];
    
    memcpy(dest, source, sizeof(source));
    my_memcpy(dest2, source2, sizeof(source2));
    cr_assert_str_eq(dest2, dest);
}

Test(memcpy, complex_test_2) {
    char source[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char dest[100];
    char source2[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char dest2[100];
    memcpy(dest, source, sizeof(source));
    my_memcpy(dest2, source2, sizeof(source2));
    cr_assert_str_eq(dest2, dest);
}

Test(memcpy, complex_test_3) {
    char source[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char dest[2];
    char source2[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char dest2[2];
    memcpy(dest, source, 4);
    my_memcpy(dest2, source2, 4);
    cr_assert_str_eq(dest2, dest);
}