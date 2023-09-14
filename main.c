#include "ft_printf.h"

int main ()
{
    int bytes_displayed = 0;
    
    char c = 'a';
    int n = -1;
    char str[] = "blablabla";
    void *ptr1 = NULL;
    void *ptr2 = &n;

    printf("Mon printf\n");
    bytes_displayed = ft_printf("%%Bonjour char = %c, int = %d, str = %s, hex = %x, hex = %X, ptr NULL = %p ptr = %p\n", c, n, str, n, n, ptr1, ptr2);
    printf("bytes displayed = %d\n", bytes_displayed);

    printf("Vrai printf\n");
    bytes_displayed = printf("%%Bonjour char = %c, int = %d, str = %s, hex = %x, hex = %X, ptr NULL = %p ptr = %p\n", c, n, str, n, n, ptr1, ptr2);
    printf("bytes displayed = %d\n", bytes_displayed);
    return (0);
}

/*
regler la problematique des pointeurs qui affichent de trop longues addresses
*/