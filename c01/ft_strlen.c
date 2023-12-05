#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_strlen(char *str)
{
    int count ;
    int lenght;
    

    count = 0,

    while(str[count] != '\0')
    {
        lenght ++;
        count ++;
    }
    ft_putchar(lenght);
}


int main(void)
{
    char *str;

    str= "ciao";
    ft_putstr(str);
}
