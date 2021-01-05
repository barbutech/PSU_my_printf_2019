/*
** EPITECH PROJECT, 2019
** long_put_nbrs
** File description:
** long put_nbr
*/

#include <stdarg.h>
#include "../../include/my.h"

unsigned long int my_unsigned_put_nbr_long_int(unsigned long int nb)
{

    if (nb > 10)
        my_unsigned_put_nbr_long_int(nb / 10);
    my_putchar(nb % 10 + 48);
}

long int my_put_nbr_long_int(long int nb)
{

    if (nb > 10)
        my_put_nbr_long_int(nb / 10);
    my_putchar(nb % 10 + 48);
}

long int my_octal_put_nbr_long_int(long int nb)
{

    if (nb > 8)
        my_octal_put_nbr_long_int(nb / 8);
    my_putchar(nb % 8 + 48);
}

long int my_hexa_put_nbr_long_int(long int nb, char type)
{
    long int tmp;
    char *parse = "012345";
    int count = 0;

    if (nb > 16)
        my_hexa_put_nbr_long_int(nb / 16, type);
        tmp = nb % 16;
        if (tmp >= 10) {
            tmp = tmp % 10;
            while (tmp != count) {
                count++;
                type++;
            }
            print_for_me(count, type);
        }
        else
            my_putchar(tmp + 48);
        return (0);
}