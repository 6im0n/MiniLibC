/*
** EPITECH PROJECT, 2024
** MiniLibC [SSH: 192.168.1.201]
** File description:
** test
*/

# pragma once

#include <criterion/criterion.h>
#include <strings.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>
#include <fcntl.h>
#include <dlfcn.h>

void init(void);
size_t my_strlen(const char *str);
char *my_strchr(const char *s, int c);
char *my_strrchr(const char *s, int c);
int my_strcmp(const char *s1, const char *s2);
char *my_strstr(const char *s1, const char *s2);
char *my_strpbrk(const char *s, const char *accept);
char *my_strncpy(char *dest, const char *src, size_t n);
char *my_strncat(char *dest, const char *src, size_t n);
char *my_strcpy(char *dest, const char *src);
char *my_strcat(char *dest, const char *src);
int my_strncmp(const char *s1, const char *s2, size_t n);
char *my_strdup(const char *s);
int my_strcasecmp(const char *s1, const char *s2);
size_t my_strcspn(const char *s, const char *reject);
size_t my_strspn(const char *s, const char *accept);
