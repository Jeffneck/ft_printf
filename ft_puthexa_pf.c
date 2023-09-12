#include "ft_printf.h"
//attention printf bug avec les hexa negatifs (unsigned int)
void ft_putchar_pf(char c, size_t *count_char){
    if(count_char == NULL){
        return;
    }
    write(1, &c, 1);
    (*count_char)++;
}

void ft_b10_to_b16_pf(unsigned int nb, size_t *count_char){
    char b16[] = "0123456789abcdef"; 
    ft_putchar_pf(b16[nb], count_char);

}
void ft_puthexa_pf(unsigned int nb, size_t *count_char){
    if (count_char == NULL)
        return; 
    
    if (nb >= 0 && nb <= 16){
        ft_b10_to_b16_pf(nb, count_char);
    }
    
    if (nb > 16){
        ft_puthexa_pf((nb / 16), count_char);
        ft_puthexa_pf((nb % 16), count_char);
    }

}

int main()
{
    size_t count_char; 

    count_char = 0;
    //ft_puthexa_pf(1, &count_char);
    ft_puthexa_pf(22, &count_char);
    //ft_puthexa_pf(45, &count_char);
    //ft_puthexa_pf(2147483647, &count_char);
    //ft_puthexa_pf(5, &count_char);
    //ft_puthexa_pf(-2147483648, &count_char);
    printf("\n count_char = %d", count_char);
    return 0;
}