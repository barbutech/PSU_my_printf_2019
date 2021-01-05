/*
** EPITECH PROJECT, 2019
** flags
** File description:
** all flags
*/

#include <stdarg.h>
#include "../../include/my.h"

int flag_char(va_list listpointer)
{
    my_putchar(va_arg(listpointer, int));
    return (1);
}

int flag_int(va_list listpointer)
{
    my_put_nbr(va_arg(listpointer, int));
    return (0);
}

int flag_string(va_list listpointer)
{
    my_putstr(va_arg(listpointer, char *));
    return (0);
}

int flag_mod(va_list listpointer)
{
    my_putchar(37);
    return (1);
}

int flag_non_printable_string(va_list listpointer)
{
    my_printable_putstr(va_arg(listpointer, char*));
    return (0);
}