/*
** EPITECH PROJECT, 2019
** base
** File description:
** base operators
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

unsigned int my_put_nbr_bin(unsigned int nb)
{
    if (nb >= 2)
        my_put_nbr_bin(nb / 2);
    my_putchar(nb % 2 + 48);
}

unsigned int my_put_nbr_oct(unsigned int nb)
{

    if (nb > 8)
        my_put_nbr_oct(nb / 8);
    my_putchar(nb % 8 + 48);
}

int base_op(unsigned int transform, char type)
{
    int convert;

    if (type == 'b') {
        my_put_nbr_bin(transform);
        return (0);
    }
    if (type == 'o') {
        my_put_nbr_oct(transform);
        return (0);
    }
    if (type == 'a' || type == 'A') {
        my_put_nbr_hex(transform, type);
        return (0);
    }
}