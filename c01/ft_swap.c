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
