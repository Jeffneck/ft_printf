#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h> //malloc free exit
#include <stdio.h> // interdit

int ft_printf(const char *str_to_f, ...);
void    detect_format(const char format, va_list args, int *ptotal);

//format_utils
void ft_putchar_pf(char c, int *p_count);
void ft_putnbr_pf(int nb, int *p_count);
void ft_putstr_pf (char *str, int *p_count);

#endif //FT_PRINTF_H