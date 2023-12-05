#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int sw_a;
    int sw_b;

    sw_a = *a;
    *a = *b;
    *b = sw_a;
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Pass the addresses of num1 and num2 to ft_swap
    ft_swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}