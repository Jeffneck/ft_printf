#include "ft_printf.h"

void ft_putnbr_pf(int nb, size_t *count_char){
    if (count_char == NULL)
        return; 
    if (nb == -2147483648){
        write(1, "-2147483648", 12);
        (*count_char) += 11;
        return; 
    }
    if (nb < 0){
        ft_putchar_pf('-', count_char);
        ft_putnbr_pf((nb* -1), count_char);
    }
    if (nb >= 0 && nb <= 9){
        ft_putchar_pf((nb + '0'), count_char);
    }
    
    if (nb > 9){
        ft_putnbr_pf((nb / 10), count_char);
        ft_putnbr_pf((nb % 10), count_char);
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