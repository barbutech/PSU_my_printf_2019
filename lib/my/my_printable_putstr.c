/*
** EPITECH PROJECT, 2019
** my_printable_putstr
** File description:
** put str smaller than 32 or greater or equal to 127
*/

#include <stdarg.h>
#include "../../include/my.h"

unsigned int my_put_nbr_S(unsigned int nb, int count)
{
    if (nb > 8) {
        count++;
        count = my_put_nbr_S(nb / 8, count);
    }
        while (count < 2) {
            my_putchar('0');
            count++;
        }
    my_putchar(nb % 8 + 48);
    return(count);
}

int my_printable_putstr(char *str)
{
    int count = 0;
    int number_of_zero = 0;
    int send;

    while (str[count] != '\0') {
        send = str[count] - 48;
        if (str[count] < 32 || str[count] >= 127) {
            my_putchar('\\');
            my_put_nbr_S(str[count], number_of_zero);
        }
        else
            my_putchar(str[count]);
        count++;
    }
    return (0);
}