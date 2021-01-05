/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** prototypes
*/
#include <stdarg.h>
#include <unistd.h>

void print_for_me(int, char);
int my_printf(char const *, ...);
int my_putchar(char);
int my_putstr(char const *);
int my_put_nbr(int);
unsigned int my_put_nbr_unsigned(unsigned int);
unsigned int my_put_nbr_bin(unsigned int);
unsigned int my_put_nbr_oct(unsigned int);
unsigned int my_put_nbr_S(unsigned int, int);
unsigned int my_put_nbr_hex(unsigned int, char);
long int my_put_nbr_long_int(long int);
unsigned long int my_unsigned_put_nbr_long_int(unsigned long int);
long int my_octal_put_nbr_long_int(long int);
long int my_hexa_put_nbr_long_int(long int, char);
int my_getnbr(char *str);
int my_strcmp(char const *, char const *);
int base_op(unsigned int, char);
int my_printable_putstr(char *);
int flag_l(char, va_list);
int flag_l_int(va_list);
int flag_l_unsigned(va_list);
int flag_l_octal(va_list);
int flag_l_hexa(va_list);
int flag_char(va_list);
int flag_int(va_list);
int flag_string(va_list);
int flag_mod(va_list);
int flag_non_printable_string(va_list);
int flag_base_bin(va_list);
int flag_base_oct(va_list);
int flag_base_low_hexa(va_list);
int flag_base_up_hexa(va_list);
int flag_unsigned_int(va_list);
int flag_unsigned_octal(va_list);