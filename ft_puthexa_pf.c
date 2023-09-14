#include "ft_printf.h"
//attention printf marche bizarrement avec les hexa negatifs 
//à cause de la manière dont ils sont rpz en mémoire (complément à 2)
//on utilise des unsigned int pour que cela fonctionne de la mm manière.

void ft_b10_to_b16_pf(unsigned int nb, int *p_count){
    char b16[] = "0123456789abcdef"; 
    ft_putchar_pf(b16[nb], p_count);

}
void ft_puthexa_pf(unsigned int nb, int *p_count)
{
    if (p_count == NULL)
        return; 
    
    if (nb <= 16){
        ft_b10_to_b16_pf(nb, p_count);
    }
    
    if (nb > 16){
        ft_puthexa_pf((nb / 16), p_count);
        ft_puthexa_pf((nb % 16), p_count);
    }

}

// int main()
// {
//     size_t count_char; 

//     count_char = 0;
//     //ft_puthexa_pf(1, &count_char);
//     ft_puthexa_pf(22, &count_char);
//     //ft_puthexa_pf(45, &count_char);
//     //ft_puthexa_pf(2147483647, &count_char);
//     //ft_puthexa_pf(5, &count_char);
//     //ft_puthexa_pf(-2147483648, &count_char);
//     printf("\n count_char = %d", count_char);
//     return 0;
// }