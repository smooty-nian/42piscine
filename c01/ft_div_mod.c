#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_div_mod(int a, int b, int *div, int *mod)
{

    *div = a \ b + '0';
    *mod = a % b + '0';
    
}
