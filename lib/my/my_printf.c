/*
** EPITECH PROJE
        printf("count 1 = %d\n", count);CT, 2019
** my_printf
** File description:
** display arg
*/

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

int find_the_flag(char format)
{
    char *ptr = "cdisSuboxX%";
    int count = 0;

    while (format != ptr[count] && ptr[count] != '\0')
        count++;
    if (ptr[count] != '\0') {
        return (count);
    } else {
        printf("-------------------------------------");
        return (count);
    }
}
/*
int flag_l(char format, va_list listpointer)
{
    char *ptr = "diuox";
    int count = 0;
    int (*print_the_l[5])(va_list);
    print_the_l[0] = &flag_l_int;
    print_the_l[1] = &flag_l_int;
    print_the_l[2] = &flag_l_unsigned;
    print_the_l[3] = &flag_l_octal;
    print_the_l[4] = &flag_l_hexa;

    while (format != ptr[count] && ptr[count] != '\0')
        count++;
    if (ptr[count] != '\0')
        print_the_l[count](listpointer);
    else
        return (84);
}
*/
int ptr_function(char format, va_list listpointer)
{
    int a = find_the_flag(format);
    int (*function[11])(va_list);
    function[0] = &flag_char;
    function[1] = &flag_int;
    function[2] = &flag_int;
    function[3] = &flag_string;
    function[4] = &flag_non_printable_string;
    function[5] = &flag_unsigned_int;
    function[6] = &flag_base_bin;
    function[7] = &flag_base_oct;
    function[8] = &flag_base_low_hexa;
    function[9] = &flag_base_up_hexa;
    function[10] = &flag_mod;

    if (a == 84)
        return (84);
    function[a](listpointer);
    return (0);
}

int clean_for_me(const char *format, int i)
{
    while (format[i + 1] == ' ' || format[i + 1] == '\t')
                i++;
        if (find_the_flag(format[i]) == 12) {
            printf("ici\n");
            my_putchar(37);
            return (84);
        }
        return (i);
}

int my_printf(char const *format , ...)
{
    int i = 0;
    va_list listpointer;

    va_start(listpointer, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i = clean_for_me(format, i);
            if (clean_for_me(format, i) != 84)
                ptr_function(format[i + 1], listpointer);
            i++;
        }
        else
            write(1, &format[i], 1);
        i++;
    }
    va_end(listpointer);
}
