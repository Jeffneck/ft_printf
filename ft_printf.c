#include "ft_printf.h"

int ft_printf(const char *str_to_f, ...)
{
    size_t  i;
    va_list args;
    int total;

    total = 0;
    va_start(args, str_to_f);
    i = 0;
    while (str_to_f[i])
    {
        if (str_to_f[i] == '%')
        {
            detect_format(str_to_f[i + 1], args, &total);
            i++;
        }
        else
            ft_putchar_pf(str_to_f[i], &total);
        i++;
    }
    va_end(args);
    return(total);
}

void    detect_format(const char format, va_list args, int *ptotal)
{

}