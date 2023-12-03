/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"

static void my_flags(const char *str, va_list args, const int i)
{
    str[i] == 'c' ? my_putchar(va_arg(args, int)) : 0;
    str[i] == 'p' ? my_put_adrss(va_arg(args, unsigned long long)) : 0;
    str[i] == 'f' ? my_put_float(va_arg(args, double)) : 0;
    str[i] == 'd' || str[i] == 'i' ? my_put_nbr(va_arg(args, int)) : 0;
    str[i] == 's' ? my_putstr(va_arg(args, const char *)) : 0;
    str[i] == 'e' ? my_perror(va_arg(args, const char *)) : 0;
    str[i] == 'u' ? my_put_nbru(va_arg(args, unsigned int)) : 0;
    str[i] == 'x' ? my_put_hexa(va_arg(args, int)) : 0;
    str[i] == 'X' ? my_put_m_hexa(va_arg(args, int)) : 0;
    str[i] == 'b' ? my_put_bin(va_arg(args, int)) : 0;
    str[i] == 'o' ? my_put_oct(va_arg(args, int)) : 0;
    str[i] == 'l' ? my_put_nbr_long(va_arg(args, long long)) : 0;
}

static int my_putspace(const char *str, int i)
{
    const int stock = i;

    for (; str[i] == ' '; i++);
    stock < i ? my_putchar(' ') : 0;
    return (i);
}

void my_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);

    for (int i = 0; str[i]; i++) {
        if (str[i] == '%') {
            i++;
            i = my_putspace(str, i);
            my_flags(str, args, i);
        } else
            my_putchar(str[i]);
    }
    va_end(args);
}
