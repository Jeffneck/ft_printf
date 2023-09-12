#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h> //malloc free exit
#include <stdio.h> // interdit

void ft_putchar_pf(char c, size_t *count_char);
void ft_putnbr_pf(int nb, size_t *count_char);

#endif //FT_PRINTF_H