/*
** EPITECH PROJECT, 2021
** my_put_hexa
** File description:
** my_put_hexa
*/

#include "my.h"

void my_put_hexa(int nb)
{
    int r;

    if (nb >= 16) {
        r = nb % 16;
        nb = nb / 16;
        my_put_hexa(nb);
    }
    else if (nb > 0) {
        r = nb % 16;
        nb = nb / 16;
    }
    if (r > 9)
        my_putchar(r + 87);
    else
        my_putchar(r + 48);
}
