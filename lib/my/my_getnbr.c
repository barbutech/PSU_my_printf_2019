/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** string to int
*/

int neg(char c)
{
    if (c == '-')
        return (-1);
    return (1);
}

int my_getnbr(char *str)
{
    int i = 0;
    int retur = 0;
    int isneg = 1;

    while (str[i] != '\0') {
        if (str[i] == '+' || str[i] == '-')
            isneg = neg(str[i]);
        else if (str[i] >= 48 && str[i] <= 57)
            retur = retur * 10 + (str[i] - 48);
        else
            break;
        i++;
    }
    retur = retur * isneg;
    return (retur);
}