/*
** EPITECH PROJECT, 2021
** my_put_float
** File description:
** my_put_float
*/

#include "my.h"

void my_put_float(double nb)
{
    int x;

    x = nb;
    my_put_nbr_long(x);
    nb = (nb - x)* 1000000 + 0.5;
    my_putchar('.');
    x = nb;
    my_put_nbr_long(x);
}
