#include "ft_printf.h"

void ft_putnbr_pf(int nbr, int *p_count)
{
    if (p_count == NULL)
        return; 
    if (nbr == -2147483648)
    {
        write(1, "-2147483648", 11);
        *p_count += 11;
        return;
    }
    if (nbr < 0)
    {
        ft_putchar_pf('-', p_count);
        ft_putnbr_pf((nbr * -1), p_count);
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
    int count_char; 

    count_char = 0;
    ft_putnbr_pf(1, &count_char);
    ft_putnbr_pf(10000, &count_char);
    ft_putnbr_pf(-5, &count_char);
    ft_putnbr_pf(-2147483648, &count_char);
    printf("\ncount_char = %d", count_char);
    return 0;
}
*/