/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** main
*/

#include <dlfcn.h>
#include <stdio.h>

int main()
{
    void (*test)(void);
    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return 84;
    test = dlsym(handle, "hello");
    if (!test)
        return 84;
    test();
    return dlclose(handle);
}