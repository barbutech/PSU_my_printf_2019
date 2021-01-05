/*
** EPITECH PROJECT, 2019
** my_put_nbr_hex
** File description:
** put a nbr in the hexa base
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

void print_for_me(int count, char pr)
{
    int (*print_this[6])(char);
    print_this[0] = &my_putchar;
    print_this[1] = &my_putchar;
    print_this[2] = &my_putchar;
    print_this[3] = &my_putchar;
    print_this[4] = &my_putchar;
    print_this[5] = &my_putchar;

    print_this[count](pr);
}

unsigned int my_put_nbr_hex(unsigned int nb, char type)
{
    int tmp;
    char *parse = "012345";
    int count = 0;

    if (nb > 16)
        my_put_nbr_hex(nb / 16, type);
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