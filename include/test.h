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
