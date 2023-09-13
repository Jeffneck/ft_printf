#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h> //malloc free exit
#include <stdio.h> // interdit

void ft_putchar_pf(char c, int *p_count);
void ft_putnbr_pf(int nb, int *p_count);
void ft_putstr_pf (char *str, int *p_count);

#endif //FT_PRINTF_H