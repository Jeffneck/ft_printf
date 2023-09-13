#include "ft_printf.h"

void ft_putchar_pf(char c, int *p_count)
{
    if(p_count == NULL){
        return;
    }
    write(1, &c, 1);
    (*p_count)++;
}