/*
** EPITECH PROJECT, 2024
** MiniLibC
** File description:
** strlen
*/

#include <dlfcn.h>
#include <stdio.h>

int main(int ac, char **av)
{
    size_t nb;
    size_t (*test)(const char *str);

    void *handle = dlopen("./libasm.so", RTLD_LAZY);

    if (!handle)
        return 84;
    test = dlsym(handle, "strlen");
    if (!test)
        return 84;
    nb = test(av[1]);
    printf("%ld", nb);
    return dlclose(handle);
}
