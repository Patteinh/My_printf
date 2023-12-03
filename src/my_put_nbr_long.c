/*
** EPITECH PROJECT, 2021
** my_put_nbr_long
** File description:
** my_put_nbr_long
*/

#include "my.h"

int my_put_nbr_long(long long nb)
{
    long a;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            a = (nb % 10);
            nb = (nb - a) / 10;
            my_put_nbr_long(nb);
            my_putchar(48 + a);
        } else {
            my_putchar(48 + nb % 10);
        }
    }
    return (0);
}
