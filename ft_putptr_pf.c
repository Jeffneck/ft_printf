#include "ft_printf.h"
void    ft_putaddress_hexa(unsigned long long address, int *p_count)
{
    if (p_count == NULL)
        return; 

    if (address <= 16)
        ft_putbase(address, "0123456789abcdef", p_count);
    
    if (address > 16)
    {
        ft_putaddress_hexa((address / 16), p_count);
        ft_putaddress_hexa((address % 16), p_count);
    }

}

void    ft_putptr_pf(unsigned long long ptr, int *p_count)
{
    unsigned long long address; 

    address = (unsigned long long) ptr;
    ft_putaddress_hexa(address, p_count);
}