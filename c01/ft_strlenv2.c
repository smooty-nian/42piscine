#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        ft_putchar(str[count]);
        count++;
    }
}

void ft_strlen(char *str)
{
    int count = 0;
    int length = 0;

    while (str[count] != '\0')
    {
        length++;
        count++;
    }

    // Print each digit of the length separately
    while (length > 0)
    {
        ft_putchar('0' + length % 10); // Extract the last digit
        length /= 10; // Move to the next digit
    }
}

int main(void)
{
    char *str = "ciao";
    ft_strlen(str);

    return 0;
}