#include "ft_printf.h"

void ft_putchar_pf(char c, size_t *count_char){
    if(count_char == NULL){
        return;
    }
    write(1, &c, 1);
    (*count_char)++;
}