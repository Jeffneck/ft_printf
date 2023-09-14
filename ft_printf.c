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
            detect_format(str_to_f[i + 1], &args, &total);
            i++;
        }
        else
            ft_putchar_pf(str_to_f[i], &total);
        i++;
    }
    va_end(args);
    return(total);
}

void    detect_format(const char format, va_list *args, int *ptotal)
{

    if (format == '%')
        ft_putchar_pf('%', ptotal);
    else if (format == 'c')
        ft_putchar_pf(va_arg((*args), int), ptotal);
    else if (format == 's')
        ft_putstr_pf(va_arg((*args), char *), ptotal);
    else if (format == 'd' || format == 'i')
        ft_putnbr_pf(va_arg((*args), int), ptotal);
    else if (format == 'u')
        ft_putnbr_unsigned_pf(va_arg((*args), unsigned int), ptotal);
    else if (format == 'x' || format == 'X')
        ft_puthexa_pf(va_arg((*args), int), format, ptotal);
    else if (format == 'p')
        ft_putptr_pf(va_arg((*args), unsigned long long), ptotal);

}
