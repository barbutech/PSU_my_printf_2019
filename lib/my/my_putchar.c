/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** put a char
*/

#include "../../include/my.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}
