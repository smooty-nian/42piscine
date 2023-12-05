#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb2() {
    int a = 0;
    while (a <= 98) {
        int b = a + 1;
        while (b <= 99) {
            ft_putchar (a / 10 + '0');
            ft_putchar (a % 10 + '0');
            ft_putchar (' ');
            ft_putchar (b / 10 + '0');
            ft_putchar (b % 10 + '0');

            if (b != 99 || a != 98) {
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
}
