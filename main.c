#include "ft_printf.h"

int main ()
{
    int bytes_displayed = 0;
    
    char c = 'a';
    int n = 1000;
    char str[] = "blablabla";

    bytes_displayed = ft_printf("Bonjour char = %c, int = %d, str = %s\n", c, n, str);
    ft_printf("bytes displayed = %d\n", bytes_displayed);
    return (0);
}