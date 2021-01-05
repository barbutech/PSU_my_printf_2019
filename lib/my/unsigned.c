/*
** EPITECH PROJECT, 2019
** unsigned
** File description:
** unsigned functions
*/

#include <stdarg.h>
#include "../../include/my.h"

unsigned int my_put_nbr_unsigned(unsigned int nb)
{
    if (nb > 10)
        my_put_nbr(nb/10);
    my_putchar(nb%10 + 48);
}

int flag_unsigned_int(va_list listpointer)
{
    my_put_nbr_unsigned(va_arg(listpointer, unsigned int));
}
