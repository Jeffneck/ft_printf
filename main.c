#include "ft_printf.h"

int main ()
{
    int bytes_displayed = 0;
    
    char c = 'a';
    int n = 1000;
    char str[] = "blablabla";

    ft_printf("Bonjour char = %c, int = %d, str = %s\n");
    return (0);
}