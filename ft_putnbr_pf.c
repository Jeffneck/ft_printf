#include "ft_printf.h"

void ft_putnbr_pf(int nb, int *p_count){
    long long nbr;

    nbr = nb;
    if (p_count == NULL)
        return; 
    if (nbr < 0)
    {
        ft_putchar_pf('-', p_count);
        ft_putnbr_pf((nbr* -1), p_count);
    }
    if (nbr >= 0 && nbr <= 9)
        ft_putchar_pf((nbr + '0'), p_count);
    
    if (nbr > 9)
    {
        ft_putnbr_pf((nbr / 10), p_count);
        ft_putchar_pf((nbr % 10) + '0', p_count);
    }
}
/*
int main()
{
    size_t count_char; 

    count_char = 0;
    ft_putnbr_pf(1, &count_char);
    ft_putnbr_pf(2147483647, &count_char);
    ft_putnbr_pf(-5, &count_char);
    ft_putnbr_pf(-2147483648, &count_char);
    printf("\n count_char = %d", count_char);
    return 0;
}
*/