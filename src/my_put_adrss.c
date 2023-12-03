/*
** EPITECH PROJECT, 2021
** my_put_adrss
** File description:
** my_put_adrss
*/

#include "my.h"

int my_put_adrss(unsigned long long nbr)
{
    my_putstr("0x");
    my_put_hexa_large(nbr);
    return (0);
}
