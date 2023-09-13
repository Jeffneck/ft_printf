#include "ft_printf.h"

void ft_putstr_pf (char *str, int *p_count)
{
    if(p_count == NULL)
        return;
    if(str == NULL)
        str = "(null)";
    while(*str){ 
        ft_putchar_pf(*str, p_count);
        str++;
    }
}
/*
int main()
{
    size_t count_char; 

    count_char = 0;
    char str1[7] = "blabla";
    char *str2 = NULL;
    ft_putstr_pf(str1, &count_char);
    //printf("\n count_char = %d", count_char);
    ft_putstr_pf(str2, &count_char);
    //printf("\n count_char = %d", count_char);
    return 0;
}
*/