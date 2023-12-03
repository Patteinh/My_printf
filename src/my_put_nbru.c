/*
** EPITECH PROJECT, 2021
** my_put_nbru
** File description:
** my_put_nbru
*/

#include "my.h"

int my_put_nbru(unsigned int nb)
{
    unsigned int a;
    unsigned int x = 0;

    if (nb >= x) {
        if (nb >= 10) {
            a = (nb % 10);
            nb = (nb - a) / 10;
            my_put_nbru(nb);
            my_putchar(48 + a);
        } else {
            my_putchar(48 + nb % 10);
        }
    }
    return (0);
}
