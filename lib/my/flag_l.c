/*
** EPITECH PROJECT, 2019
** flag_l
** File description:
** flags of the l flag
*/

#include <stdarg.h>
#include "../../include/my.h"

int flag_l_int(va_list listpointer)
{
    my_put_nbr_long_int(va_arg(listpointer, long int));
}
int flag_l_unsigned(va_list listpointer)
{
    my_unsigned_put_nbr_long_int(va_arg(listpointer, long int));
}

int flag_l_octal(va_list listpointer)
{
    my_octal_put_nbr_long_int(va_arg(listpointer, long int));
}

int flag_l_hexa(va_list listpointer)
{
    my_hexa_put_nbr_long_int(va_arg(listpointer, long int), 'a');
}