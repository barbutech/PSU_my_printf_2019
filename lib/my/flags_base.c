/*
** EPITECH PROJECT, 2019
** flags_base
** File description:
** flags of bases
*/

#include <stdarg.h>
#include "../../include/my.h"

int flag_base_bin(va_list listpointer)
{
    base_op(va_arg(listpointer,unsigned int), 'b');
}

int flag_base_oct(va_list listpointer)
{
    base_op(va_arg(listpointer,unsigned int), 'o');
}

int flag_base_low_hexa(va_list listpointer)
{
    base_op(va_arg(listpointer, unsigned int), 'a');
}

int flag_base_up_hexa(va_list listpointer)
{
    base_op(va_arg(listpointer, unsigned int), 'A');
}