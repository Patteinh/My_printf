/*
** EPITECH PROJECT, 2021
** my_put_bin
** File description:
** my_put_bin
*/

#include "my.h"

void my_put_bin(int nb)
{
    int x = 0;

    if (nb >= 2) {
        x = (nb % 2);
        nb = nb / 2;
        my_put_bin(nb);
    }
    else if (nb > 0) {
        x = nb % 2;
        nb = nb / 2;
        my_putchar(x + 48);
    }
}
