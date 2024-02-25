/*
** EPITECH PROJECT, 2024
** MiniLibC [SSH: 192.168.1.201]
** File description:
** init
*/

#include "test.h"


size_t my_strlen(const char *str)
{
    size_t nb;
    size_t (*test)(const char *str);

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return 84;
    test = dlsym(handle, "strlen");
    if (!test)
        return 84;
    nb = test(str);
    dlclose(handle);
    return nb;
}

char *my_strchr(const char *s, int c)
{
    char *(*test)(const char *s, int c);
    char *str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return NULL;
    test = dlsym(handle, "strchr");
    if (!test)
        return NULL;
    str = test(s, c);
    dlclose(handle);
    return str;
}

char *my_strrchr(const char *s, int c)
{
    char *(*test)(const char *s, int c);
    char *str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return NULL;
    test = dlsym(handle, "strrchr");
    if (!test)
        return NULL;
    str = test(s, c);
    dlclose(handle);
    return str;
}


int my_strcmp(const char *s1, const char *s2)
{
    int (*test)(const char *s1, const char *s2);
    int str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return -4242;
    test = dlsym(handle, "strcmp");
    if (!test)
        return -4242;
    str = test(s1, s2);
    dlclose(handle);
    return str;
}

char *my_strstr(const char *str1, const char *str2)
{
    char *(*test)(const char *str1, const char *str2);
    char *str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return NULL;
    test = dlsym(handle, "strstr");
    if (!test)
        return NULL;
    str = test(str1, str2);
    dlclose(handle);
    return str;
}

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    int (*test)(const char *s1, const char *s2, size_t n);
    int str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return -4242;
    test = dlsym(handle, "strncmp");
    if (!test)
        return -4242;
    str = test(s1, s2, n);
    dlclose(handle);
    return str;
}

int my_strcasecmp(const char *s1, const char *s2)
{
    int (*test)(const char *s1, const char *s2);
    int str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return -4242;
    test = dlsym(handle, "strcasecmp");
    if (!test)
        return -4242;
    str = test(s1, s2);
    dlclose(handle);
    return str;
}

char *my_strpbrk(const char *s1, const char *s2)
{
    char *(*test)(const char *s1, const char *s2);
    char *str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return NULL;
    test = dlsym(handle, "strpbrk");
    if (!test)
        return NULL;
    str = test(s1, s2);
    dlclose(handle);
    return str;
}

size_t my_strcspn(const char *s1, const char *s2)
{
    int (*test)(const char *s1, const char *s2);
    int str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return -4242;
    test = dlsym(handle, "strcspn");
    if (!test)
        return -4242;
    str = test(s1, s2);
    dlclose(handle);
    return str;
}

void *my_memset(void *s, int c, size_t n)
{
    void *(*test)(void *s, int c, size_t n);
    void *str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return NULL;
    test = dlsym(handle, "memset");
    if (!test)
        return NULL;
    str = test(s, c, n);
    dlclose(handle);
    return str;
}

void *my_memcpy(void *dest, const void *src, size_t n)
{
    void *(*test)(void *dest, const void *src, size_t n);
    void *str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return NULL;
    test = dlsym(handle, "memcpy");
    if (!test)
        return NULL;
    str = test(dest, src, n);
    dlclose(handle);
    return str;
}

void *my_memmove(void *dest, const void *src, size_t n)
{
    void *(*test)(void *dest, const void *src, size_t n);
    void *str;

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return NULL;
    test = dlsym(handle, "memmove");
    if (!test)
        return NULL;
    str = test(dest, src, n);
    dlclose(handle);
    return str;
}
