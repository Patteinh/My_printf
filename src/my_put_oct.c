/*
** EPITECH PROJECT, 2021
** my_put_oct
** File description:
** my_put_oct
*/

#include "my.h"

void my_put_oct(int nb)
{
    int x = 0;
    if (nb > 7) {
        x = (nb % 8);
        nb = nb / 8;
        my_put_oct(nb);
        my_putchar(x + 48);
    }
    else if (nb >= 0) {
        x = nb % 8;
        nb = nb / 8;
        my_putchar(x + 48);
    }
}
